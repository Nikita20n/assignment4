#include <iostream>
#include <ctime>
using namespace std;
 
class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance) : balance(initialBalance) {}

    void displayBalance() {
        cout << "Current Balance: Rs.20000 " <<endl;
    }

    bool withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
          std::cout << "Withdrawal successful. Remaining balance: $" << balance << std::endl;
        } else {
        cout<<"                                    ATM ACCOUNT WITHDRAWEL                              "<<endl;
		cout<<"\n";
        cout<<"\n";  
		cout<<"The Name of the Account Holder are  : Rakesh Kharva"<<endl;
		cout<<"\n";
		cout<<"        The Account Holders' address is :Mumbai"<<endl;
		cout<<"\n";
		cout<<"        The Branch location  is :Andheri"<<endl;
		cout<<"\n";
		cout<<"        Account number :5678"<<endl;
		cout<<"\n";
		cout<<"\n"; 
        cout<<"        Insufficient Availabel Balance in your account."<<endl;
        cout<<"\n";
		cout<<"\n"; 
		cout<<"                       Sorry !!                        "<<endl;
		cout<<"Press any key to continue . . . . .                    "<<endl;
        }
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        cout << "Your new available Balanced Amount is Rs." << balance <<endl;
        cout<<"\n";
        cout<<"                     Thank you!              "<<endl;
        cout<<"\n";
        cout<<"Press any key to return main menu                      "<<endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }
            
};

int main() {
    int choice;
    const int atmPin = 12345;
    int pinAttempt = 0;

    cout <<"||||||||||||||||||||||||||||||||||||||||||||| Welcome to the ATM Banking Application!|||||||||||||||||||||||||||||||||||||||||||||"<<endl;
    cout<<"\n";
    time_t currentTime = time(0);
    tm* localTime = localtime(&currentTime);
    cout<<"                                                       -----------------\n";
    cout<<"\n";
    cout << "                                                   Current Date and Time: " << asctime(localTime);
    cout<<"\n";
    cout<<"                                                       -----------------\n";
    cout<<"\n";
    cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"<<endl;

    cout <<"                                          Press 1 and Then Press Enter To Access Your Account Via PIN Number                       "<<endl;
    cout<<"\n";
    cout<<"                                                                    or                                                              "<<endl;
    cout<<"\n";
    cout << "                                         Press 0 and press Enter to get Help.                                                     "<<endl;
    cin >> choice;
    cout<<"\n";
    cout<<"\n";

    if (choice == 1) {
        int enteredPin;
        cout <<"||||||||||||||||||||||||||||||||||| ATM ACCOUNT ACCESS |||||||||||||||||||||||||||||||||||" <<endl;
        cout<<"\n";
        cout<<"\n";
        cout << "Enter Your Acc Pin Access Number! [Only one attempy is allowed] "<<endl;
        cout<<"\n";
        cout<<"\n";
        cout<<"|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" <<endl;
        cin >> enteredPin;

        if (enteredPin == atmPin) {
        
            BankAccount userAccount(20000.0);

            while (true) {
        cout << "                                  ATM Main Menu Screen                                     "<<endl;
        cout << "                        Enter[1]To Deposit Cash                                            "<<endl;
        cout << "                        Enter[2]To Withdraw Cash                                           "<<endl;
        cout << "                        Enter[3]To Balance Inquiry                                         "<<endl;
        cout << "                        Enter[0]To Exit ATM                                                "<<endl;
        cout<<"              PLEASE ENTER A SELECTION AND PRESS RETURN KEY:";
        cin >> choice;
        cout<<"\n";
        cout<<"\n";

        if (choice == 1) {
        double depositAmount;
        cout<<"                                    ATM ACCOUNT DEPOSIT SYSTEM                                "<<endl;
		cout<<"\n";
        cout<<"\n";  
		cout<<"The Name of the Account Holder are  : Rakesh Kharva"<<endl;
		cout<<"\n";
		cout<<"        The Account Holders' address is :Mumbai"<<endl;
		cout<<"\n";
		cout<<"        The Branch location  is :Andheri"<<endl;
		cout<<"\n";
		cout<<"        Account number :5678"<<endl;
		cout<<"\n";
        cout<<"\n"; 
        cout<<"        Present available balance :Rs.20000"<<endl;
		cout<<"\n";        
        cout << "      Enter the amount to be deposit: Rs. ";
        cin >> depositAmount;
        cout<<"\n";
        
         userAccount.deposit(depositAmount);
        } else if (choice == 2) {
        double withdrawAmount;
        cout << "Enter withdrawal amount: $";
        cin >> withdrawAmount;
        userAccount.withdraw(withdrawAmount);
			    }	else if (choice == 3) {
                    userAccount.displayBalance();
                } else if (choice == 0) {
                    cout << "Exiting the application." <<endl;
                    break;
                } else {
                    cout << "Invalid choice. Please select a valid option." <<endl;
                }
            }
        } else {
        cout<<"                                     THNAK YOU                                              "<<endl;
        cout<<"\n"; 
        cout<<"You had made your attempt which failed!!! No More attempts allowed!! Sorry!!!               "<<endl;
        cout<<"\n";
		cout<<"Press any key to continue . . . . .                                                         "<<endl; 
        
        }
    } else if (choice == 0) {
        cout << "                                  ATM ACCOUNT STATUS                                     "<<endl;
        cout<<"\n"; 
        cout << "          You must have correct pin number to access this account. see your              "<<endl;
        cout<<"\n"; 
        cout << "              bank representive for assistance during bank opening hours                 "<<endl;
        cout<<"\n"; 
        cout << "                        Thanks for,your choice today!!                                    "<<endl;
        cout<<"\n"; 
        cout<<"\n"; 
        cout<<"Press any key to continue . . . . .                                                         "<<endl;
    } else {
        std::cout << "Invalid choice. Exiting the application." << std::endl;
    }

    return 0;
}

