#include <iostream>
using namespace std;

class Employee
{
	int id;
	static int count; // Static data member is shared by all objects. It is a class-related member..
public:
	void setData()
	{
		cout << "Enter the id" << endl;
		cin >> id;
		count++;
	}
	void getData()
	{
		cout << "The id of employee is " << id << " and this is employee number " << count << endl;
	}

	static void getCount()
	{ // Static Member Function
		// They can only access Static Data Members
		cout << "The value of count is " << count << endl;
		// cout<<id;  // throws an error
	}
};

// Static data member
int Employee::count = 0; // Default value is 0

int main()
{
	Employee usama, usman, bilal;
	//	usama.id=1;
	//	usama.count=1   can't do this as id and count are private members.

	usama.setData();
	usama.getData();
	Employee::getCount(); // Static Member Function accessed (using class name)

	usman.setData();
	usman.getData();
	Employee::getCount();

	bilal.setData();
	bilal.getData();
	Employee::getCount();
	return 0;
}