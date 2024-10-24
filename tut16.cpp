#include <iostream>
using namespace std;

//Call by Reference using Pointers  
void swapPointer(int* a, int* b){
	int temp = *a;
	*a=*b;
	*b=temp;
}

int main(){
	//Call by Value, Call by Reference
	//Call by Reference
	int x=4,y=5;
	cout<<"Value of x is : "<<x<<" and Value of y is : "<<y<<endl;
	swapPointer(&x,&y);
	cout<<"Value of x is : "<<x<<" and Value of y is : "<<y<<endl;
	return 0;
}