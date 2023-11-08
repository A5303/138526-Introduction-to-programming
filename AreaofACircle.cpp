#include <iostream>
using namespace std;

int main() {
    int choice;
    float radius, length, width, base, height, area;

    cout << "Geometry Calculator\n";
    cout << "1. Calculate the Area of a Circle\n";
    cout << "2. Calculate the Area of a Rectangle\n";
    cout << "3. Calculate the Area of a Triangle\n";
    cout << "4. Quit\n\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "\nEnter the radius of the circle: ";
            cin >> radius;
            area = 3.14159 * radius * radius;
            cout << "\nThe area of the circle is " << area << endl;
            break;
        case 2:
            cout << "\nEnter the length and width of the rectangle: ";
            cin >> length >> width;
            area = length * width;
            cout << "\nThe area of the rectangle is " << area << endl;
            break;
        case 3:
            cout << "\nEnter the base and height of the triangle: ";
            cin >> base >> height;
            area = 0.5 * base * height;
            cout << "\nThe area of the triangle is " << area << endl;
            break;
        case 4:
            cout << "\nGoodbye!\n";
            break;
        default:
            cout << "\nInvalid choice.\n";
            break;
    }

    return 0;
}
