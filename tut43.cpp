//Ambiguity Resolutin in Inheritance

#include <iostream>
using namespace std;

class Base1{
	public:
		void greet(){
			cout<<"How are you?"<<endl;
		}
};

class Base2{
	public:
		void greet(){
			cout<<"Kaysy ho?"<<endl;
		}
};

class Derived:public Base1, public Base2{
	int a;
	public:
	void greet(){
		Base2::greet();    //ambiguity resolution
	}
};

class B{
	public:
		void say(){
			cout<<"Hello world"<<endl;
		}
};

class D:public B{
	int a;
	//D's new say() method will override base class B's say()method
	public:
		void say(){
			cout<<"Hello my beautiful people"<<endl;
		}
};

int main(){
	// Ambiguity 1
//	Base1 base1obj;
//	Base2 base2obj;
//	base1obj.greet();
//	base2obj.greet();
//	Derived d;
//	d.greet();         //ambiguity, which greet?
	
	
	// Ambiguity 2
	B b;
	b.say();
	
	D d;
	d.say(); 
	
	return 0;
}