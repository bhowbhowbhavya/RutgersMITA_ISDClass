#include <iostream>
#include <string>
using namespace std;

void displayLastFiveChars(string input);
void displayRBSPosition(string input);
void displayConcatenated(string input1, string input2);

int main()
{
    string input1, input2, input3;

    cout << "Enter a string: ";
    getline(cin, input1);
    cout << "The following has been input by you: " << input1 << endl;
    displayLastFiveChars(input1);

    cout << "Now enter another string with RBS in it: ";
    getline(cin, input2);
    displayRBSPosition(input2);

    cout << "Input another string to be merged with the first one: ";
    getline(cin, input3);
    displayConcatenated(input1, input3);

    return 0;
}

void displayLastFiveChars(string input)
{
    int idx;

    idx = input.length() - 5;
    cout << "Last 5 characters of the string is: " <<
             input.substr(idx) << endl << endl;
}

void displayRBSPosition(string input)
{
    cout << "Position of the word RBS is: " << 
            input.find("RBS") << endl << endl;
}

void displayConcatenated(string input1, string input2)
{
    cout << "Merged string is: \n" << 
            input1 + " " + input2 << endl;
}
