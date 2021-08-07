#include <iostream>
#include <fstream>
#include <string>
#include "studentacc.h"

int main()
{
    ofstream studentfile;
    string FullName, SID, filename, loop;
    double StartBalance, Percentage, WithdrawAmount;

    while(true)
    {
        cout << "Please enter 'q' to quit or press any other character to continue: ";
        cin >> loop;
        if ( loop == "q" )
            break; // exit the while loop

        // 1. take user inputs
        cout << "Student Name: \n";
        cin >> FullName;
        cout << "Student ID: \n";
        cin >> SID;
        cout << "Account Start Balance: \n";
        cin >> StartBalance;
        cout << "Percentage you want to deduct, ex. 0.20 is 20%: \n";
        cin >> Percentage;
        cout << "Enter the name of the file that you want to save to: ";
        cin >> filename;

        WithdrawAmount = Percentage*StartBalance;
        cout << "\n" << Percentage << " of withdraw amount is: " << WithdrawAmount << endl;

        // 2. declare a student account object with above inputs
        StudentAccount StudentGS(SID, FullName, StartBalance);

        // 3. deduct the amount using charge function of StudentAccount class
        StudentGS.charge(WithdrawAmount);

        // 4. display balance
        cout << "Account Balance is: " << StudentGS.getBalance() << endl;

        // 5. create a new file if it doesn't exist; or else opens it to append
        studentfile.open(filename, fstream::in | fstream::out | fstream::app);

        // save all student info in that file
        studentfile << SID << "\t" << FullName << "\t Start Balance is: "
                << StartBalance << "\n" << Percentage <<
                " of withdraw account is: " << WithdrawAmount << endl
                << "Account Balance: " << StudentGS.getBalance() << endl << endl;
        
        studentfile.close();
        cout << "file: " << filename << " is saved." << endl << endl;
    }
    
    return 0;
}