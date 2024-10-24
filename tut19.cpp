#include <iostream>
using namespace std;

//Function Overloading

int sum(int a, int b){
	cout<<"using function with 2 arguments."<<endl;
	return a+b;
}

int sum(int a, int b, int c){
	cout<<"using function with 3 arguments."<<endl;
	return a+b+c;
}

// volume of a cylinder
int volume(double r, int h){
	return (3.14 * r * r * h); 
}

// volume of a cube
int volume(int a){
	return (a*a*a);
}

// volume of Rectangular Box
int volume(int l, int b, int h){
	return (l*b*h);
}

int main(){
	cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
	cout<<"The sum of 3, 7 and 6 is "<<sum(3,7,6)<<endl;
	cout<<"The volume of cuboid of  of 3, 7 and 6 is "<<volume(3,7,6)<<endl;
	cout<<"The volume of cylinder of  of radius 3 and height 6 is "<<volume(3,6)<<endl;
	cout<<"The volume of cube of side 6 is "<<volume(3)<<endl;
	return 0;
}