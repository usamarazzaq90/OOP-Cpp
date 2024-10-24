// Read and Write in the same file and Closing files
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Connecting our file with hout stream
    ofstream hout("sample60.txt"); // Writing

    // // Creating a name string and filling it with string entered by the user
    string name;
    cout << "Enter your name: ";
    cin >> name;

    // // Writing a string to the file
    hout << "My name is " + name;
    hout.close();

    ifstream hin("sample60.txt"); // Reading
    string content;
    // hin >> content;
    getline(hin, content);
    cout << "The content of this file is: " << content;
    hin.close();
    return 0;
}