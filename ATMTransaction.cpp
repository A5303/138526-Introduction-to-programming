#include <iostream>
using namespace std;

int main() {
    float balance, withdrawalAmount, dailyLimit;

    cout << "Enter your account balance: ";
    cin >> balance;
    cout << "Enter the amount you want to withdraw: ";
    cin >> withdrawalAmount;
    cout << "Enter your daily withdrawal limit: ";
    cin >> dailyLimit;

    if (withdrawalAmount > dailyLimit) {
        cout << "Withdrawal amount exceeds daily limit." << endl;
        return 0;
    }

    if (withdrawalAmount > balance) {
        cout << "Insufficient funds." << endl;
        return 0;
    }

    balance -= withdrawalAmount;

    cout << "Withdrawal successful. Your new balance is $" << balance << "." << endl;

    return 0;
}
