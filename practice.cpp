#include <iostream>
#include <math.h>
using namespace std;

class Number{
	static int count;
	public:
		Number(){
			count++;
			cout<<"Constructor is invoked for object "<<count<<endl;
		}
		~Number(){
			cout<<"Desructor invoked for object "<<count<<endl;
			count--;
		}
	};
	
int Number::count;

int main(){
	cout<<"This is main function"<<endl;
	cout<<"Creating our first object"<<endl;
	Number a;
	{
		cout<<"We are entering inside a block"<<endl;
		cout<<"Creating second and third object"<<endl;
		Number c,d;
		cout<<"Leaving the block"<<endl;
	}
	cout<<"We are inside main again."<<endl;
	return 0;
}