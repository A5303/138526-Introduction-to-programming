#include <iostream>
using namespace std;

int main() {
    int daysLate;
    string bookType;
    float fineAmount;

    cout << "Enter the number of days late: ";
    cin >> daysLate;
    cout << "Enter the type of book (regular, children's, or reference): ";
    cin >> bookType;

    if (bookType == "regular") {
        if (daysLate <= 7) {
            fineAmount = daysLate * 0.10;
        } else {
            fineAmount = 0.70 + (daysLate - 7) * 0.20;
        }
    } else if (bookType == "children's") {
        if (daysLate <= 7) {
            fineAmount = daysLate * 0.05;
        } else {
            fineAmount = 0.35 + (daysLate - 7) * 0.10;
        }
    } else if (bookType == "reference") {
        fineAmount = daysLate * 0.50;
    } else {
        cout << "Invalid book type." << endl;
        return 0;
    }

    cout << "The late fee for returning a " << bookType << " book " << daysLate << " days late is $" << fineAmount << "." << endl;

    return 0;
}
