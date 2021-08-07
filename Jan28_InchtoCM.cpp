#include "std_lib_facilities.h"

int main()
{
	const double cm2inch = 2.54;    
	int length = 1;					// length in inches, initialize with 1 to execute while loop at the starting

	while (length != 0) 		    // whenever length == 0 then you want to exit the program
	{ 			
		cout << "Please enter a length in inches: ";
		cin >> length;
		cout << length << "in.  = "
			<< cm2inch * length << "cm.\n";
	}

	return 0;
}
