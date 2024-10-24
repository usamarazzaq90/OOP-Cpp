#include <iostream>
using namespace std;
//Inheritance Syntax & Visibility

//Base Class
class Employee{
	public:
		int id;
		float salary;
		Employee(){};
		Employee(int inpId){
			id=inpId;
			salary=34.0;
		}
};

//Derived class syntax
/*
class {{derived-class-name}} : {{visibility-mode}}  {{base-class-name}} 
{
	class members/methods etc...
}
Notes:
1- Default visibility mode is private
2- Public Visibility Mode:  Public members of the base class becomes Public members of the derived class.
3- Private Visibility Mode:  Public members of the base class becomes Private members of the derived class.
4- ***PRIVATE MEMBERS ARE NEVER INHERITED.***
*/

//Creating a Programmer class derived from Employee base class
class Programmer :  public Employee{
	public:
		int languageCode;
		Programmer(int inpId){
			id=inpId;
			languageCode= 9;
		}
		void getData(){
			cout<<id<<endl;
		}
};

int main(){
	Employee usama(1), usman(2);
	cout<<usama.salary<<endl;
	cout<<usman.salary<<endl;
	Programmer skillF(10);
	cout<<skillF.languageCode<<endl;
	cout<<skillF.id<<endl;
	skillF.getData();
	return 0;
}