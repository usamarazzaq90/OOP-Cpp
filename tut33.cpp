#include <iostream>
using namespace std;
//Dynamic Initialization of Objects using Constructors

class BankDeposit{
	int  principal;
	int years;
	float interestRate;
	float returnValue;
	
	public:
		BankDeposit(){};
		BankDeposit(int p, int y, float r);   //r can be a value like 0.04
		BankDeposit(int p, int y, int r);   //r can be a value like 14(%)
		void show();
};

BankDeposit::BankDeposit(int p, int y, float r){
	principal=p;
	years=y;
	interestRate=r;
	returnValue=principal;
	for(int i=0;i<y;i++){
		returnValue= returnValue*(1+interestRate);
	}
}

BankDeposit::BankDeposit(int p, int y, int r){
	principal=p;
	years=y;
	interestRate=float (r)/100;
	returnValue=principal;
	for(int i=0;i<y;i++){
		returnValue= returnValue*(1+interestRate);
	}
}

void BankDeposit::show(){
	cout<<endl<<"Principle amount was "<<principal<<"."
		<<endl<<"Return value after "<<years
		<<" year/s is "<<returnValue<<endl;
}

int main(){
	BankDeposit bd1, bd2, bd3;
	int p, y;
	float r;
	int R;
	
//	bd3.show();
	
	cout<<"Enter the values of p, y, and r"<<endl;
	cin>>p>>y>>r;
	bd1=BankDeposit(p,y,r);
	bd1.show();

	cout<<"Enter the values of p, y, and R"<<endl;
	cin>>p>>y>>R;
	bd2=BankDeposit(p,y,R);
	bd2.show();
	return 0;
}