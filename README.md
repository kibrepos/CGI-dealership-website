# CGI Dealership Website

A car dealership website built using XAMPP, CGI Scripts (C++), HTML, CSS, and JavaScript.

![Dealership Image 1](https://github.com/user-attachments/assets/dff18b2e-c343-4091-b926-472a34d3ac7a)
![Dealership Image 2](https://github.com/user-attachments/assets/50e82e71-c038-45b7-895b-c09f18b7588c)
![Dealership Image 3](https://github.com/user-attachments/assets/58746275-e956-47bb-a038-c4598e044c5d)
![Dealership Image 4](https://github.com/user-attachments/assets/6beca9f9-9046-41ad-ac81-4fce51e1fdc2)
![Dealership Image 5](https://github.com/user-attachments/assets/56e26394-543a-444c-bd89-b456341e3dd5)

---

## Project Setup and Instructions

### How to Run

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

5. **Access the Application**
   - Open your preferred browser.
   - Type `localhost/login.html` in the address bar.

### To Log In

Use the following credentials to log in:
- **kbadmin**: `admin123`
- **markuser**: `password1`
- **lebuser**: `password2`
- **tamuser**: `password3`

---

## Notes

### Updating CGI Scripts

If you need to modify the CGI scripts:
1. Open the corresponding CPP file.
2. Make your changes.
3. Navigate to the `cgi-bin` folder in XAMPP.
4. Open the terminal in this folder by right-clicking.
5. Compile the updated CGI file using the command:
   ```sh
   g++ filename.cpp -o filename.cgi
   ```

---
