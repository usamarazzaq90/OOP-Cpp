//Constructors in Derived Classes (Inheritance)

#include <iostream>
using namespace std;

/*
Case1:
class B: public A{
	Orer of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
	Orer of execution of constructor -> first B() then C() and then A()
};

Case3:   (V.Important)
class A: public B, virtual public C{
	Orer of execution of constructor -> first C() then B() and then A()
};

*/

class Base1{
	int data1;
	public:
		Base1(int i){
			data1=i;
			cout<<"Base1 class constructor is invoked"<<endl;
		}
		void printDataBase1(){
			cout<<"The value of data1 is "<<data1<<endl;
		}
};

class Base2{
	int data2;
	public:
		Base2(int i){
			data2=i;
			cout<<"Base2 class constructor is invoked"<<endl;
		}
		void printDataBase2(){
			cout<<"The value of data1 is "<<data2<<endl;
		}
};

class Derived : public Base1, public  Base2{
	int derived1, derived2;
	public:
		//Special Syntax
		Derived(int a, int b, int c, int d): Base1(a), Base2(b){
			derived1=c;
			derived2=d;
			cout<<"Derived class constructor called"<<endl;
		}
		void printDataDerived(){
			cout<<"The value of derived1  is "<<derived1<<endl;
			cout<<"The value of derived2  is "<<derived2<<endl;
		}
};

int main(){
	Derived usama(1,2,3,4);
	usama.printDataBase1();
	usama.printDataBase2();
	usama.printDataDerived();
	return 0;
}