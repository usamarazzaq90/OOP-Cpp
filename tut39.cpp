#include <iostream>
using namespace std;
//Private Access Modifier

class Base{
	protected:     //It is not public, but it can be inherited.
		int a;
	private:
		int b;
};

/*

					       Public derivation		Private derivation		Protected derivation
	1- Private members       Not inherited             Not inherited          Not Inherited
	2- Protected members      Protected                  Private               Protected
	3- Public members          Public                    Private               Protected

*/

class Derived:  protected Base{
	
};

int main(){
	Base b;
	Derived d;
//	cout<<b.a;  will not work because a is protected in both base as well as derived class
	return 0;
}