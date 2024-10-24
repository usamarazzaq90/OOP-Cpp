//             Pointers in C++

#include <iostream>
using namespace std;
int main(){
	//Pointer: A data type which holds the address of other data types / variables.
	int a=3;
	int* b=&a;  // & --> (address of) operator
	cout<<"The address of a is : "<<b<<endl;
	cout<<"The address of a is : "<<&a<<endl;
	
	// * --> (value at ...) Dereference operator
	cout<<"The value of a is : "<<*b<<endl;
	
	//pointer to pointer (address of another address) || skip if it's too complex
	int** c=&b; 
	cout<<"The address of b is : "<<&b<<endl;
	cout<<"The address of b is : "<<c<<endl;
	cout<<"The value at address c is : "<<*c<<endl;
	cout<<"The value at address value_at(value_at(c)) is : "<<**c<<endl;
	return 0;
}