// Member Function TEMPLATES and Overload template functions

#include <iostream>
using namespace std;

template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Harry<T>::display()
{
    cout << data;
}

void func(int a)
{
    cout << "I am first func()" << endl;
}

template <class T>
void func1(T a)
{
    cout << "I am templatized func1()" << endl;
}

int main()
{
    // Harry<float> h(5.57);
    // Harry<char> h('c');
    // cout << h.data << endl;
    // h.display();

    func(4);  // Exact match takes the highest priority
    func1(4); // Exact match takes the highest priority

    return 0;
}