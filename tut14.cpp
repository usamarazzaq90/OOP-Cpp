#include <iostream>
using namespace std;

//Structures
typedef struct employee{
	//data
	int eId;
	char favChar;
	float salary;
	//9 bytes are allocated
} emp;

// Unions, Enums
union money{
	//data (only one data type can be used at a time) 
	int rice;
	char car;
	float pounds;
	//only 4 bytes are allocated for memory
};

int main(){
	enum Meal{breakfast, lunch, dinner};
	Meal m=breakfast;
	cout<<m<<endl;
	cout<<breakfast<<endl;
	cout<<lunch<<endl;
	cout<<dinner<<endl;
	
	union money m1;
	m1.rice=34;
	cout<<m1.rice<<endl;
	
	emp harry;
	emp usama;
	emp usman;
	harry.eId=1;
	harry.favChar='C';
	harry.salary=120000000;
	cout<<"The Value is "<<harry.eId<<endl;
	cout<<"The Value is "<<harry.favChar<<endl;
	cout<<"The Value is "<<harry.salary<<endl;
	return 0;
}