#include <iostream>
using namespace std;

class Employee
{
	int id;
	int salary;

public:
	void setId()
	{
		salary = 122;
		cout << "Enter ID of employee: ";
		cin >> id;
	}
	void getId()
	{
		cout << "The ID of this employee is " << id << endl;
	}
};
int main()
{
	//	Employee usama,bilal,usman,sufyan;
	//	usama.setId();
	//	usama.getId();

	Employee fb[4];
	for (int i = 0; i < 4; i++)
	{
		fb[i].setId();
		fb[i].getId();
	}
	cout << "Happy Ending!" << endl;
	return 0;
}