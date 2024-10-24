#include <iostream>
using namespace std;

//Recursions & Recursive Functions

int factorial(int n){
	if(n<=1){
		return 1;
	}
	return n* factorial(n-1);
}

//Fibonacci
int fibonacci(int n){
	if(n<=1){
		return 1;
	}
	return fibonacci(n-2) + fibonacci(n-1);
}

int main(){
	//Factorial of a number
	int a;
	cout<<"Enter a number: ";
	cin>>a;
//	cout<<"Factorial of "<<a<<" is "<<factorial(a)<<endl;
	cout<<"The term in fibonacci sequence at position "<<a<<" is "<<fibonacci(a)<<endl;
	return 0;
}