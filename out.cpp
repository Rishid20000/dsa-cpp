#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string filename = "output.txt";
    string content = "This is some sample content to be written to a file.";

    // Open the file
    ofstream file(filename);

    // Check if the file was opened successfully
    if (!file.is_open()) {
        cout << "Unable to open file: " << filename << endl;
        return 1;
    }

    // Write the content to the file
    file << content << endl;

    // Close the file
    file.close();

    cout << "Content written to file: " << filename << endl;

    return 0;
}