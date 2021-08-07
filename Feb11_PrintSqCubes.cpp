#include "std_lib_facilities.h"

int main()
{
    int number;
    int max_limit;

    cout << "Input the maximum number: ";
    cin >> max_limit; // take input
    
    // check for errors
    if (max_limit < 1)
    {
        cout << "Wrong Input! Please enter a valid integer >= 1\n";
        return 0;
    }

    cout << "\n";
    cout << "integer\tsquare\tcube\n"; // output column heads

    for (number = 1; number <= max_limit; number++)
    {
        // output the integer, its square and its cube
        cout << number << '\t' << number * number << '\t'
            << number * number * number << "\n";
    }

    return 0;
}
