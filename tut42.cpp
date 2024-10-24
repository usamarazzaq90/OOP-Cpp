//Inheritance Exercise
#include <iostream>
#include <math.h>
using namespace std;
/*
Create 2 classe:
	1- SimpleCalculator -> Takes input of 2 numbers using a utility function and performs +,-,*,/, and 
	                      displays the result using another function.
	2- ScientificCalculator -> Takes input of 2 numbers using a utility function and performs any four
	                      scientific operations of your choice,  and displays the result using another
						  function.
	
	Create another class Hybrid Calculator and inherit it using these 2 classes.
	Q1. What type of Inheritance are you using?
	Ans: Multiple Inheritance.
	
	Q2. Which mode of Inheritance are you using?
	Ans: Public mode.
	
	Q3. Create an object of HybridCalculator and display result of simple and 
	    scientific calculator.
	    
	Q4. How is code reusability implemented?
	Ans: For HybridCalculator, I don't need to  write all the calculation functions separately, instead, I am inheriting all the
	     functions from SimpleCalculator and ScientificCalculator.
*/

//Task-1
class SimpleCalculator{
	int a,b;
	public:
		void getDataSimple(){
			cout<<"Enter the value of a "<<endl;
			cin>>a;
			cout<<"Enter the value of b "<<endl;
			cin>>b;
		}
		void performOperationsSimple(){
			cout<<"The value of a + b is: "<<a+b<<endl;
			cout<<"The value of a - b is: "<<a-b<<endl;
			cout<<"The value of a * b is: "<<a*b<<endl;
			cout<<"The value of a / b is: "<<(float)a/b<<endl;
		}
};



//Task-2
class ScientificCalculator{
	int a,b;
	public:
		void getDataScientific(){
			cout<<"Enter the value of a "<<endl;
			cin>>a;
//			cout<<"Enter the value of b "<<endl;
//			cin>>b;
		}
		void performOperationsScientific(){
			cout<<"The value of cos(a) is: "<<cos(a)<<endl;
			cout<<"The value of sin(a) is: "<<sin(a)<<endl;
			cout<<"The value of exp(a) is: "<<exp(a)<<endl;
			cout<<"The value of tan(a) is: "<<tan(a)<<endl;
		}
};


//Task-3
class HybridCalculator: public SimpleCalculator, public ScientificCalculator{
};

int main(){
//	SimpleCalculator obj1;
//	obj1.getDataSimple();
//	obj1.performOperationsSimple();

//	ScientificCalculator obj1;
//	obj1.getDataScientific();
//	obj1.performOperationsScientific();
	


	HybridCalculator obj1;
	obj1.getDataSimple();
	obj1.performOperationsSimple();
	
	obj1.getDataScientific();
	obj1.performOperationsScientific();
	
	return 0;
}