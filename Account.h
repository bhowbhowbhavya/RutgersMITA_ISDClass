
#include <iostream>
#include <string>
using namespace std;

class Account {
public:
     	Account() {
		name = "unknown";
		balance = 0;
	}
   // Account constructor with two parameters  
   Account(std::string accountName, int initialBalance) 
      : name{accountName} { // assign accountName to data member name

      // validate that the initialBalance is greater than 0; if not,
      // data member balance keeps its default initial value of 0
      if (initialBalance > 0) { // if the initialBalance is valid
         balance = initialBalance; // assign it to data member balance
      }
   }

   // function that deposits (adds) only a valid amount to the balance
   void deposit(int depositAmount) {
      if (depositAmount > 0) { // if the depositAmount is valid
         cout << "adding " << depositAmount << " to " << name << " account balance.." << endl;
         balance = balance + depositAmount; // add it to the balance 
      }
      else {
        std::cout<< "Invalid amount!\n"<<endl;
      }
   }

   // function that withdraws (subtracts) only a valid amount from the balance
   void withdraw(int withdrawalAmount) {
      if (withdrawalAmount > 0) { // if the depositAmount is valid
         cout << "withdrawing " << withdrawalAmount << " from " << name << " account balance.." << endl;
         balance = balance - withdrawalAmount; // subtract it from the balance 
      }
      else {
         std::cout<< "Invalid amount!\n"<<endl;
      }
   } 

   // function returns the account balance
   int getBalance() const {
      return balance;
   }

   // function that sets the name
   void setName(std::string accountName) {
      name = accountName;
   }

   // function that returns the name
   std::string getName() const {
      return name;
   }
private:
   std::string name; // account name data member 
   int balance{0}; // data member with default initial value
};

