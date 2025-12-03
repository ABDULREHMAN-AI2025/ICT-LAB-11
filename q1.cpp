#include <iostream>
using namespace std;

class BankAccount {
public:
    string name;
    double balance;

    BankAccount(string accountName, double initialBalance) {
        name = accountName;
        balance = initialBalance;
        cout << "Account created for " << name << endl;
    }
};

int main() {
    BankAccount customer1("Abdul Rehman", 1000.0);
    BankAccount customer2("Ali", 500.0);

    return 0;
}
