#include <iostream>
using namespace std;

//Forward declaration
class Complex;

class Calculator{
	public:
		int add(int a, int b){
			return a+b;
		}
		int sumRealComplex(Complex , Complex );
		int sumImaginaryComplex(Complex , Complex );
};

class Complex{
	int a,b;
//  Individually declarring functions as friends.
//	friend int Calculator::sumRealComplex(Complex , Complex );
//	friend int Calculator::sumImaginaryComplex(Complex , Complex );
	
	//Alternate: Declaring entire Calculator class as friend.
	friend class Calculator;   //Calculator is friend class of Complex.
	
	public:
		void setNumber(int n1, int n2){
			a=n1;
			b=n2;
		}
		void printNumber(){
			cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
		}		
};

int Calculator::sumRealComplex(Complex o1, Complex o2){
			return (o1.a + o2.a);
		}
		
int Calculator::sumImaginaryComplex(Complex o1, Complex o2){
			return (o1.b + o2.b);
		}
				
int main(){
	Complex o1,o2;
	o1.setNumber(1,4);
	o2.setNumber(5,7);
	Calculator calc;
	int res=calc.sumRealComplex(o1,o2);
	cout<<"The sum of real part of o1 and o2 is "<<res<<endl;
	int resImaginary=calc.sumImaginaryComplex(o1,o2);
	cout<<"The sum of imaginary part of o1 and o2 is "<<resImaginary<<endl;
	return 0;
}