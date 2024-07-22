# CGI-dealership-website
A car dealership website made using XAMPP, CGI Scripts (C++), and HTML,CSS, and Javascript.

# Project Setup and Instructions

## How to Run

1. **Open XAMPP**
   - Launch the XAMPP control panel.

2. **Start Apache Server**
   - Locate the Apache module.
   - In the Actions column, click **Start**.
   - Verify the server is running by checking the output screen for the following lines:
     ```
     [Apache] Attempting to start Apache app...
     [Apache] Status change detected: running
     ```

3. **Move HTML Files**
   - Transfer all HTML files to the `htdocs` folder in XAMPP.
   - Default location: `C:\xampp\htdocs`

4. **Move CGI and CPP Files**
   - Transfer all CGI and CPP files to the `cgi-bin` folder in XAMPP.
   - Default location: `C:\xampp\cgi-bin`

5. **Access Application**
   - Open your preferred browser.
   - Type `localhost/login.html` in the address bar.

## To Log In

Use the following credentials to log in:

| Username | Password    |
|----------|-------------|
| admin    | admin123    |
| user1    | password1   |
| user2    | password2   |
| user3    | password3   |

## Notes

### Updating CGI Scripts
If you need to modify the CGI scripts:
1. Open the corresponding CPP file.
2. Make your changes.
3. Navigate to the `cgi-bin` folder in XAMPP.
4. Open the terminal in this folder. Right click 
5. Compile the updated CGI file using the command: g++ (filename).cpp -o (filename).cgi
