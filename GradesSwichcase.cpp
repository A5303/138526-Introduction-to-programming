#include <iostream>
#include <string>

using namespace std;

int main() {
    string fullName;
    string course;
    int score;

    cout << "Enter the full name of the student: ";
    getline(cin, fullName);
    
    cout << "Enter the course: ";
    getline(cin, course);
    
    cout << "Enter the score: ";
    cin >> score;

    char grade;

    switch (score / 10) {
        case 7:
        case 8:
        case 9:
        case 10:
            grade = 'A';
            break;
        case 6:
            grade = 'B';
            break;
        case 5:
            grade = 'C';
            break;
        case 4:
            grade = 'D';
            break;
        default:
            if (score >= 0 && score < 40) {
                grade = 'F';
            } else {
                grade = 'I'; 
            }
    }

    cout << "Full Name: " << fullName << endl;
    cout << "Course: " << course << endl;
    cout << "Score: " << score << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
