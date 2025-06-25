# C-APPLICATION-TO-READ-WRITE-AND-APPEND-DATA-TO-TEXT-FILES.
C++ APPLICATION TO READ, WRITE, AND APPEND DATA TO TEXT FILES.

*COMPANY* : CODTECH IT SOLUTION

*NAME* : MANAV AWANA

*INTERN ID* : CT04DN1135

*DOMAIN* : C++

*DURATION* : 4 WEEKS

*MENTOR NAME* : NEELA SANTOSH

*DESCRIPTION* : 
 1.Objective
The primary goal of this program is to:
- Teach how to handle file input/output operations in C++.
- Provide a practical implementation for writing and reading textual data.
- Help users understand how to control file modes like overwrite (ios::out) and append (ios::app).
- Build basic logic for menu-based applications using loops and switch statements.
  
 2.Headers and Namespaces
   At the top of the code, three essential headers are included:
-#include <iostream> – for standard input and output operations using cin and cout.
-include <fstream> – for file stream classes (ofstream and ifstream) used in file handling.
-#include <string> – to allow the use of the string data type, which is used for reading and writing textual data.
-The using namespace std; directive is used to avoid prefixing standard library elements with std::.

3.Main Functional Components
   1. writeToFile(const string& filename)
  This function is responsible for writing data to the file. It opens the file using ofstream without specifying any mode, which defaults to ios::out. This mode overwrites any existing content in the file.
    -The function checks whether the file was successfully opened.
    -If successful, it prompts the user to enter data line-by-line.
    -The loop continues until the user types "end", which serves as the stopping condition.
    -Each entered line is written to the file using outFile << data << endl;.
    -Finally, the file is closed using outFile.close();.
    -This is useful when the user wants to start with fresh content and remove all previous data.

  2. appendToFile(const string& filename)
  This function appends new data to the existing file without deleting previous content. The file is opened using ofstream with the mode ios::app (append mode).
    -Just like the write function, it checks if the file opened successfully.
    -It takes user input line-by-line and continues until the keyword "end" is entered.
    -Each line is appended to the end of the existing content in the file.
    -After completion, the file is properly closed.
    -This functionality is useful when additional content needs to be added without modifying or deleting what’s already in the file.

  3. readFromFile(const string& filename)
  This function reads the content of the file and displays it line-by-line on the screen. It uses the ifstream class to open the file in read mode.
    -It first checks whether the file was opened successfully.
    -If successful, it reads each line using getline() and prints it using cout.
    -After reading all lines, it closes the file.
    -This function helps verify what has been written or appended to the file.
     
3. User Interface: The Menu System
The main() function contains a menu-driven loop that allows the user to select which operation to perform. It uses a do-while loop combined with a switch statement for multiple-choice functionality.
   The menu offers 4 options:
    -Write to the file (overwrite)
    -Append to the file
    -Read from the file
    -Exit the program
 After the user enters their choice, the corresponding function is called.
 cin.ignore() is used after taking the integer input to clear the newline character left in the input buffer, ensuring getline() works correctly in subsequent input.
The loop keeps running until the user chooses option 4 to exit the program.

4. Error Handling
In all three functions (writeToFile, appendToFile, and readFromFile), file-opening errors are handled gracefully. If the file cannot be opened (perhaps due to permission issues or missing directories), the program prints a relevant error message using cerr.

5.Conclusion
This file handling program serves as an excellent learning tool for understanding how to work with text files in C++. It showcases key concepts such as:
  -File stream classes (ofstream, ifstream)
  -Modes (ios::app, default ios::out)
  -Using getline() for multi-word input
  -Handling user input and creating menu-driven programs
  -Managing file resources with proper close() calls
Overall, the program is clean, efficient, and user-friendly. It can be further extended to include features like deleting a file, searching for keywords in the file, or editing specific lines—making it an ideal base for more advanced file-based applications.






