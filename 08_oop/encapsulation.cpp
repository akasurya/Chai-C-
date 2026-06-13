#include <iostream>

using namespace std;
 
class BankAccount {
    private: 
        string accountNumber;
        double balance;
    
    public:
        BankAccount(string accNum, double initialBalance){
            accountNumber = accNum;
            balance = initialBalance;
        }

        //getter
        double getBalance() const{
            return balance;

        }

        //Method to deposit money
        void deposit (double amount){
            if (amount >0){
                balance += amount;
                cout << "Deposited: " << amount << endl;
            } else {
                cout << "Invalid ammount";
            }
        }

        //methode for withdraw
        void withdraw (double amount){
            if (amount >0 && amount <= balance){
                balance -= amount;
            } else {
                cout << "Invalid ammount"<< endl;
            }
        }

};

int main() 
{
    BankAccount myAcount("123456", 500);

    myAcount.getBalance();

    myAcount.deposit(200);
    myAcount.withdraw(100);


    return 0;
}