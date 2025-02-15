#include <iostream>
using namespace std;

class c2;

class c1{
	int val1;
	public:
		void indata(int a){
			val1=a;
		}
		void display(){
			cout<<val1<<endl;
		}
	friend void exchange(c1 &,c2 &);
};

class c2{
	int val2;
	public:
		void indata(int a){
			val2=a;
		}
		void display(){
			cout<<val2<<endl;
		}
	friend void exchange(c1 &,c2 &);
};

/*
Trick to swap 2 numbers a and b:
	temp=a
	a=b
	b=temp 
*/

void exchange(c1 &x, c2 &y){
	int temp=x.val1;
	x.val1=y.val2;
	y.val2=temp;
}
int main(){
	c1 oc1;
	c2 oc2;
	
	oc1.indata(34);
	oc2.indata(67);
	exchange(oc1, oc2);
	
	cout<<"The value of c1 after exchange becomes: ";
	oc1.display();
	cout<<"The value of c2 after exchange becomes: ";
	oc2.display();
	return 0;
}