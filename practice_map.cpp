#include <iostream>
#include <map>
// #include <string>
using namespace std;

int main()
{
    string jewels = "aA";
    string stones = "aAAbbbb";
    map<char, int> mp;
    // cout << mp.size() << endl;
    for (int i = 0; i < jewels.size(); i++)
    {
        mp[jewels[i]]++;
    }
    int count = 0;
    for (int i = 0; i < stones.size(); i++)
    {
        if (mp[stones[i]])
        {
            count++;
        }
    }

    cout << count << endl;
    // cout << mp['x'] << endl;
    return 0;
}