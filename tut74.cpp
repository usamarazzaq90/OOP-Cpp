// Function objects in C++
#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    // Function Object (Functor): Function wrapped in a class, so that it is available like an object.
    int arr[] = {15, 73, 4, 2, 54, 7};
    // sort(arr, arr + 6);                 //ascending order
    sort(arr, arr + 6, greater<int>()); // descending order
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}