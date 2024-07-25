#include <iostream>
#include <fstream>
#include <string>
#include <map>

// Function to print HTML headers with Set-Cookie
void printHTMLHeaderWithCookie(const std::string& cookie = "") {
    std::cout << "Content-Type: text/html\n";
    if (!cookie.empty()) {
        std::cout << "Set-Cookie: " << cookie << "\n";
    }
    std::cout << "\n";
}

// Function to read and print an HTML file
void printHTMLFile(const std::string& filePath) {
    std::ifstream file(filePath);
    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            std::cout << line << "\n";
        }
        file.close();
    } else {
        std::cout << "<h1>404 Not Found</h1><p>The requested file could not be found.</p>";
    }
}

// Function to check if a user is logged in based on cookies
bool isLoggedIn() {
    const char* cookie = std::getenv("HTTP_COOKIE");
    if (cookie != nullptr) {
        std::string cookies(cookie);
        return cookies.find("session_id=valid") != std::string::npos;
    }
    return false;
}

// Function to handle login
void handleLogin() {
    std::string post_data;
    std::getline(std::cin, post_data);

    size_t user_pos = post_data.find("username=");
    size_t pass_pos = post_data.find("&password=");

    std::string received_username = post_data.substr(user_pos + 9, pass_pos - (user_pos + 9));
    std::string received_password = post_data.substr(pass_pos + 10);

    // Define valid accounts
    std::map<std::string, std::string> valid_accounts = {
        {"admin", "admin123"},
        {"user1", "password1"},
        {"user2", "password2"},
        {"user3", "password3"}
    };

    bool login_success = (valid_accounts.find(received_username) != valid_accounts.end() &&
                          valid_accounts[received_username] == received_password);

    if (login_success) {
        // Login successful, set session cookie
        printHTMLHeaderWithCookie("session_id=valid; HttpOnly");
        printHTMLFile("C:\\xampp\\htdocs\\landing.html"); // Update path to landing.html
    } else {
        // Login failed, show error message on login page
        printHTMLHeaderWithCookie(); // Use header function to print HTML header
        printHTMLFile("C:\\xampp\\htdocs\\login.html"); // Update path to login.html
        std::cout << "<script>document.querySelector('#error-msg').textContent = 'Invalid username or password.';</script>";
    }
}

int main() {
    std::string queryString = std::getenv("QUERY_STRING") ? std::getenv("QUERY_STRING") : "";
    std::string requestMethod = std::getenv("REQUEST_METHOD") ? std::getenv("REQUEST_METHOD") : "GET";

    // Determine if headers need to be printed here
    bool headersPrinted = false;

    if (queryString.find("page=login") != std::string::npos && requestMethod == "POST") {
        handleLogin();
        headersPrinted = true;
    } else {
        if (isLoggedIn()) {
            if (!headersPrinted) {
                printHTMLHeaderWithCookie();
                headersPrinted = true;
            }
            printHTMLFile("C:\\xampp\\htdocs\\landing.html"); // Update path to landing.html
        } else {
            if (!headersPrinted) {
                printHTMLHeaderWithCookie();
                headersPrinted = true;
            }
            printHTMLFile("C:\\xampp\\htdocs\\login.html"); // Update path to login.html
        }
    }

    return 0;
}
