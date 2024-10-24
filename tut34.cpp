#include <iostream>
using namespace std;
// Copy Constructors

class Number{
	int a;
	public:
		Number(){
			a=0;
		};
		
		Number(int num){
			a=num;
		}
	
// **Imp**    When no copy constructor is found, compiler supplies its own copy constructor.
		Number(Number &obj){     //Copy constructor
			cout<<"Copy constructor invoked!!!"<<endl;
			a=obj.a;
		}
		
		void display(){
			cout<<"The number for this object is "<<a<<endl;
		}
};

int main(){
	Number x,y,z(45), z2;
	x.display();
	y.display();
	z.display();
	Number z1(x);  //Copy constructor invoked
	z1.display();   
//	z1 should exactly resemble z or x or y
	
	z2=z;  // Copy constructor wll NOT be invoked
	z2.display();
	
	Number z3=z;  // Copy constructor wll be invoked
	z3.display();
	return 0;
}