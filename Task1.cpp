#include <iostream>   // For input and output
#include <fstream>    // For file handling
#include <string>     // For using string data type

using namespace std;

// Function to write data (overwrite if file exists)
void writeToFile(const string& filename) {
    ofstream outFile(filename);  // Creates or opens file for writing (overwrites existing content)
    
    if (!outFile) {
        cerr << "Error opening file for writing!" << endl;
        return;
    }

    string data;
    cout << "Enter data to write to file (type 'end' to stop):" << endl;
    
    while (true) {
        getline(cin, data);
        if (data == "end") break;
        outFile << data << endl;  // Write each line to the file
    }

    outFile.close();  // Close the file
    cout << "Data written successfully.\n" << endl;
}

// Function to append data (adds to the end of the file)
void appendToFile(const string& filename) {
    ofstream outFile(filename, ios::app);  // Open in append mode
    
    if (!outFile) {
        cerr << "Error opening file for appending!" << endl;
        return;
    }

    string data;
    cout << "Enter data to append (type 'end' to stop):" << endl;

    while (true) {
        getline(cin, data);
        if (data == "end") break;
        outFile << data << endl;  // Append each line
    }

    outFile.close();  // Close the file
    cout << "Data appended successfully.\n" << endl;
}

// Function to read and display file content
void readFromFile(const string& filename) {
    ifstream inFile(filename);  // Open file for reading

    if (!inFile) {
        cerr << "Error opening file for reading!" << endl;
        return;
    }

    string line;
    cout << "\n--- File Contents ---" << endl;
    while (getline(inFile, line)) {
        cout << line << endl;  // Print each line
    }

    inFile.close();  // Close the file
    cout << "--- End of File ---\n" << endl;
}

int main() {
    string filename = "data.txt";  // Default file name

    int choice;
    do {
        cout << "File Operations Menu:\n";
        cout << "1. Write to File (overwrite)\n";
        cout << "2. Append to File\n";
        cout << "3. Read from File\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();  // Clear newline character from input buffer

        switch (choice) {
            case 1:
                writeToFile(filename);
                break;
            case 2:
                appendToFile(filename);
                break;
            case 3:
                readFromFile(filename);
                break;
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
