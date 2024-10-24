// CLASS TEMPLATES WITH DEFAULT  PARAMETERS

#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class Usama
{
public:
    T1 a;
    T2 b;
    T3 c;
    Usama(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
    }
};

int main()
{
    Usama<> u(6, 9.9, 'u');
    u.display();
    cout << endl;
    Usama<float, char, char> v(1.8, 'a', 'u');
    v.display();
    return 0;
}