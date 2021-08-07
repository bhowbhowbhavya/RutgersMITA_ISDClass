#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input1, input2, input3;
    int idx;

    cout << "Enter a string: ";
    getline(cin, input1);
    cout << "The following has been input by you: " <<
             input1 << endl;

    idx = input1.length() - 5; //index of the 5th character from end
    cout << "Last 5 characters of the string are: " <<
            input1.substr(idx) << endl << endl;

    cout << "Now enter another string with RBS in it: ";
    getline(cin, input2);

    cout << "Position of the word RBS is: " << 
            input2.find("RBS") << endl << endl;

    cout << "Input another string to be merged with the first one:";
    getline(cin, input3);

    cout << "Merged string is: \n" << 
            input1 + " " + input3 << endl;

    return 0;
}