// Vectors in C++
#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout << "Displaying this vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout << v.at(i) << " ";  //Same
    }
    cout << endl;
}
int main()
{
    /// Ways to create a Vector
    vector<int> vec1; // zero length vector
    int element, size;
    // cout << "Enter the size of vector : ";
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "\nEnter the element " << i + 1 << " : ";
    //     cin >> element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back();
    // display(vec1);
    // vector<int>::iterator it = vec1.begin();   //acts like apointer
    // // vec1.insert(it, 566);
    // // vec1.insert(it + 1, 566);
    // vec1.insert(it + 1, 8, 566); // Making 8 cpies of 566
    // display(vec1);

    vector<char> vec2(4); // 4-elements character vector
    // vec2.push_back('A');
    // display(vec2);
    vector<char> vec3(vec2); // 4-elements character vector from vec2
    // display(vec3);
    vector<int> vec4(4, 13); // 4-elements vector of 13s
    display(vec4);
    cout << vec4.size() << endl;

    return 0;
}