#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositorName;
    string accountNumber;
    string accountType;
    double balanceAmount;

public:
    
    BankAccount(
	const string& name, const string& accNumber, const string& accType, double initialBalance)
        : depositorName(name), accountNumber(accNumber), accountType(accType), balanceAmount(initialBalance) {}

    
    void deposit(double amount) {
        if (amount > 0) {
            balanceAmount += amount;
            cout << "Deposited $" << amount << " successfully.\n";
        } else {
            cout << "Please enter a valid amount for deposit.\n";
        }
    }

    
    void withdraw(double amount) {
        if (amount > 0) {
            if (balanceAmount - amount >= 0) {
                balanceAmount -= amount;
                cout << "Withdrawn $" << amount << " successfully.\n";
            } else {
                cout << "Insufficient funds. Cannot perform the withdrawal.\n";
            }
        } else {
            cout << "Please enter a valid amount for withdrawal.\n";
        }
    }

    
    void displayAccountInfo() {
        cout << "Depositor Name: " << depositorName <<endl;
        cout << "Account Number: " << accountNumber <<endl;
        cout << "Account Type: " << accountType <<endl;
        cout << "Balance Amount: $" << balanceAmount <<endl;
    }
};


int main() {
    BankAccount account1("swati kulkarni", "123456789", "Savings", 1000.0);
    BankAccount account2("Nikita Joshi", "882356789", "Savings", 2000.0);


    account1.deposit(500);
    account1.withdraw(200);
    account2.deposit(1000);
    account2.withdraw(700);

    
    account1.displayAccountInfo();
    account2.displayAccountInfo();

    return 0;
}

