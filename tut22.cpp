//	OOPs - Classes and Objects

//  C++ --> initially called --> C with classes by stroustroup
//	class --> extension of structures (in C)
//  Structures had limits: 
//         - Members are public 
//         - No methods
//  classes --> structures + more
//  classes --> can have methods and properties
//  classes --> can make few members as priate and few as public
//	structures in C++ are typedef
//	you can declare objects along with class declaration like:
	/*	class Employee{
			//class definition
		} usama, usman, sufyan; */
//	usama.salary = 8 makes no sense if salary is private


//	Nesting of member functions

#include <iostream>
#include <string>
using namespace std;

class binary{
//	private:     (By default, it is private)
		string s;
		void chk_bin(void);
	public:
		void read(void);
		void ones_compliment(void);
		void display(void);
};

void binary::read(){
	cout<<"Enter a binary number "<<endl;
	cin>>s;
}

void binary::chk_bin(){
	for(int i=0; i<s.length(); i++){
		if(s.at(i)!='0' && s.at(i)!='1'){
			cout<<"Incorrect binary format"<<endl;
			exit(0);   //Exit the program
		}
	}
}

void binary::ones_compliment(){
	for(int i=0; i<s.length(); i++){
		if(s.at(i)=='0') s.at(i)='1';
		else if(s.at(i)=='1') s.at(i)='0';
	}
}

void binary::display(){
	chk_bin();      //Nesting
	cout<<"Displaying your binary number "<<endl;
	for(int i=0; i<s.length(); i++){
		cout<<s.at(i);
	}
	cout<<endl;
}


int main(){
	binary b;
	b.read();
//	b.chk_bin();    It is private
	b.display();
	b.ones_compliment();
	cout<<"After taking 1's compliment "<<endl;
	b.display();
	
	return 0;
}