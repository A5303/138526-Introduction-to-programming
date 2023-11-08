#include <iostream>
using namespace std;

int main() {
    int age;
    string movieType;
    float ticketPrice;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter the type of movie (regular or 3D): ";
    cin >> movieType;

    if (age < 0) {
        cout << "Invalid age." << endl;
        return 0;
    }

    if (movieType == "regular") {
        if (age < 4) {
            ticketPrice = 0;
        } else if (age < 18) {
            ticketPrice = 8.50;
        } else if (age < 65) {
            ticketPrice = 12.50;
        } else {
            ticketPrice = 9.50;
        }
    } else if (movieType == "3D") {
        if (age < 4) {
            ticketPrice = 0;
        } else if (age < 18) {
            ticketPrice = 11.50;
        } else if (age < 65) {
            ticketPrice = 15.50;
        } else {
            ticketPrice = 12.50;
        }
    } else {
        cout << "Invalid movie type." << endl;
        return 0;
    }

    cout << "The ticket price for a " << movieType << " movie for a " << age << "-year-old is $" << ticketPrice << "." << endl;

    return 0;
}
