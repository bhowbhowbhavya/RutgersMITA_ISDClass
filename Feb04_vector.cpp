
//Average marks calculator


#include "std_lib_facilities.h"


int main()
{
    int marks;
    int sum = 0; 
    vector<int> myVector; 

    cout << "Please enter marks one by one:\n";

    while(cin >> marks)
    {
        myVector.push_back(marks);
    }

    cout << "You have entered marks in " << myVector.size() << " subjects!\n";
    cout << "Inputted values are: ";

    for (int i = 0; i < myVector.size(); i++)
    {
        cout << myVector[i] << " "; 
        sum = sum+ myVector[i]; 
    }
    cout << endl << endl; 

    cout << "Total sum of all marks is: " << sum << "\n";
    cout << "Their average is: " << sum / myVector.size() << "\n";

    sort(myVector); 
    cout << "Minimum marks you've got is: " << myVector[0] << "\n"; 

}