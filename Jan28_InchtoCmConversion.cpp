#include "std_lib_facilities.h""

int main()
{
	const double cm2inch = 2.54;
	int val;
	char unit;

	while (cin >> val >> unit) {	
		if (unit == 'i')		// 'i' for inch
			cout << val << "in == " << val * cm2inch << "cm\n";
		else if (unit == 'c')	// 'c' for cm
			cout << val << "cm == " << val / cm2inch << "in\n";
		else
			return 0;	
	}
}
