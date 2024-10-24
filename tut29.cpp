#include <iostream>
using namespace std;

class Complex{
	int a,b;
	public:
	//Creaing a Constructor
	//Constructor is a special member function with same name as of the class.
	//It is used to initialize the objects of its class.
	//It is automatically invoked whenever an object is created.
	Complex();  // Constructor declaration  (No need to specify return type)
	void printNumber(){
		cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
	}
};

Complex :: Complex(){  // --> This is a default constructor as it accepts no paramters.
	a=0;
	b=5;
	//cout<<"Hello World!"<<endl;
}
int main(){
	Complex c1, c2, c3;
	c1.printNumber();	
	c2.printNumber();	
	c3.printNumber();	
	return 0;
}

/* Characteristics of constructor

1. It should be declared in the public section of the class.
2. They are automatically invoked whenever the object is created.
3. They cannot return values and do not have return types.
4. It can have default arguments.
5. We cannot refer to their address.


*/