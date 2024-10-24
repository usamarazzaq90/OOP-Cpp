// Templates with multiple parameters
#include <iostream>
using namespace std;
/*
CLASS TEMPLATES WITH MULTIPLE PARAMETERS

template <class T1, class T2.......(COMMA SEPARATED)>
class nameOfClass{
    body
}
*/

template <class T1, class T2>
class myClass
{
public:
    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << endl
             << this->data2 << endl;
    }
};

int main()
{
    // myClass<int, char> obj(1, 'c');
    myClass<char, float> obj('C', 6.99);
    obj.display();
    return 0;
}