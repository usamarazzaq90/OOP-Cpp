#include <iostream>
using namespace std;
//Multiple Inheritance

/*
Syntax for inheriting in multiple inheritance
class DerivedC : visibility-mode base1, visibility-mode base2
{
	Class body of class "DerivedC"
}
*/

class Base1{
	protected:
		int base1int;
	public:
		void set_base1int(int x){
			base1int=x;
		}
};

class Base2{
	protected:
		int base2int;
	public:
		void set_base2int(int x){
			base2int=x;
		}
};

class Base3{
	protected:
		int base3int;
	public:
		void set_base3int(int x){
			base3int=x;
		}
};

class Derived : public Base1, public Base2, public Base3{
	public:
		void show(){
			cout<<"The value of Base1 is "<<base1int<<endl;
			cout<<"The value of Base2 is "<<base2int<<endl;
			cout<<"The value of Base3 is "<<base3int<<endl;
			cout<<"The sum of these values is "<<base1int+base2int+base3int<<endl;
		}
};

/*
The inherited derived class will look something like this:
Data Members
	base1int-->protected
	base2int-->protected
	
Member Functions:
	set_base1int(int)-->public
	set_base2int(int)-->public
	show()-->public
*/

int main(){
	Derived usama;
	usama.set_base1int(25);
	usama.set_base2int(5);
	usama.set_base3int(15);
	usama.show();
	return 0;
}