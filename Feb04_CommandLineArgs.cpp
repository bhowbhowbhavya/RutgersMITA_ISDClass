
#include "std_lib_facilities.h"

int main( int argc, char *argv[] )
{
	const double cm2inch = 2.54;
	double val;
	string unit;
	
	if (argc < 3)
	{
		cout << "Warning!! Not enough arguments! You've entered " << argc - 1 << " arguments. This program needs 2 arguments!\n";
		return 0;
	}
	else if (argc > 3)
	{
		cout << "Warning!! Too many arguments! You've entered " << argc - 1 << " arguments. This program needs 2 arguments only!\n";
		return 0;
	}

	cout << "If you need help, please pass help and 0 separated by a space \notherwise enter unit nd value separated by a space!\n\n";

	unit = argv[1];
	val = stof(argv[2]);
	
	if (unit == "help")
	{
		cout << "usage: convert unit unitvalue \n i for inch to cm converting \n c for cm to inch converting \n type 'help' for this menu!\n";
	}
	else if (unit == "i")
	{
		cout << val << "in == " << val * cm2inch << "cm\n";
	}
	else if (unit == "c")
	{
		cout << val << "cm == " << val / cm2inch << "in\n";
	}
	else
	{
		cout << "Warning!! Invalid argument!" << unit << " First argument should be either 'i' or 'c' or 'help'\n";
	}
	
	return 0;

}






