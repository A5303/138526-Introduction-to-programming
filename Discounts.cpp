#include <iostream>
using namespace std;

int main() {
    float purchaseAmount, discount, totalCost;

    cout << "Enter the purchase amount: ";
    cin >> purchaseAmount;

    if (purchaseAmount >= 1000) {
        discount = 0.1;
    } else if (purchaseAmount >= 500) {
        discount = 0.05;
    } else {
        discount = 0;
    }

    totalCost = purchaseAmount - (purchaseAmount * discount);

    cout << "The total cost after applying the discount is $" << totalCost << endl;

    return 0;
}
