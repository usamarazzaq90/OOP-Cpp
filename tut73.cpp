// Maps in C++
#include <iostream>
#include <map>
// #include <string>
using namespace std;

// Map is an associative array
int main()
{
    map<string, int> marksMap;
    marksMap["Usama"] = 98;
    marksMap["Jack"] = 59;
    marksMap["Rohan"] = 2;
    marksMap.insert({{"usman", 100}, {"bilal", 99}});
    map<string, int>::iterator itr;
    for (itr = marksMap.begin(); itr != marksMap.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << "\n";
    }
    cout << "The size of the map is : " << marksMap.size() << endl;
    cout << "The maximum size is :" << marksMap.max_size() << endl;
    cout << "The empty's return value is : " << marksMap.empty() << endl;
    return 0;
}