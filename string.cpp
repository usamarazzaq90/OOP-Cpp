#include <iostream>
#include <string>
using namespace std;

// Program to capitalize lowercase letters and vice versa.

int main()
{
    string s1 = "famILY";
    for (int i = 0; i <= s1.size(); i++)
    {
        if (s1[i] >= 65 && s1[i] <= 90)
        {
            s1[i] += 32;
        }
        else if (s1[i] >= 97 && s1[i] <= 122)
        {
            s1[i] -= 32;
        }
    }
    cout << s1 << endl;
    return 0;
}