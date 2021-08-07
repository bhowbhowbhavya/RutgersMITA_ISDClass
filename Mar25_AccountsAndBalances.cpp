#include <iostream>
#include <string>
#include "Account.h"
using namespace std;

int main()
{
    Account user1("Batman", 100);
    Account user2("Spiderman", 200);
    Account user3("Superman", 300);
    
    cout << "Intial balance of Batman: "<< user1.getBalance()<<endl;
    cout << "Intial balance of Spiderman: "<< user2.getBalance()<<endl;
    cout << "Intial balance of Superman: "<< user3.getBalance()<<endl;
    
    int deposit;
    
    cout << "\nEnter the deposit for user1: "<< endl;
    cin >> deposit;
    user1.deposit(deposit);
    cout << "User1: " << user1.getName() << " current balance is: "<< user1.getBalance()<< endl;

    cout << "\nEnter the deposit for user2: "<< endl;
    cin >> deposit;
    user2.deposit(deposit);
    cout << "User2: " << user2.getName() << " current balance is: "<< user2.getBalance()<< endl;
   
    cout << "\nEnter the deposit for user3: "<< endl;
    cin >> deposit;
    user3.deposit(deposit);
    cout << "User3: " << user3.getName() << " current balance is: "<< user3.getBalance()<< endl;

    cout << "\nFinal balance of "<< user1.getName() << " is: "<< user1.getBalance() << endl;
    cout << "Final balance of "<< user2.getName() << " is: "<< user2.getBalance() << endl;
    cout << "Final balance of "<< user3.getName() << " is: "<< user3.getBalance() << endl;

    return 0;
}

