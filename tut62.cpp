// open() and eof() functions
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample60.txt");
    out << "This is me\n";
    out << "This is also me\n";
    out << "This is Usama Razzaq";
    out.close();

    ifstream in;
    in.open("sample60.txt");
    // string st1, st2, st3;
    // // in >> st;
    // getline(in, st1);
    // cout << st1 << endl;
    // getline(in, st2);
    // cout << st2 << endl;
    // getline(in, st3);
    // cout << st3;
    // in.close();

    string st;
    while (in.eof() == 0)
    { // end of file
        getline(in, st);
        cout << st << endl;
    }
    in.close();
    return 0;
}