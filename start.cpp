#include <iostream>
#include <fstream>
#include <string>

// Function to print HTML headers
void printHTMLHeader() {
    std::cout << "Content-Type: text/html\n\n";
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

int main() {
    printHTMLHeader();
    printHTMLFile("C:\\xampp\\htdocs\\login.html"); // StartProgram

    return 0;
}
