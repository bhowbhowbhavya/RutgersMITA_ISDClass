#include "std_lib_facilities.h"

int main()
{
	cout << "Please enter your first name and age:\n";
	string first_name;			// define variable as string type
	int age;
	cin >> first_name >> age;			// read input from terminal

	cout << "Hello, " << first_name << ", age: " << age << "\n";	// display name on the terminal 

	return 0;
}