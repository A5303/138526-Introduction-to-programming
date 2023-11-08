#include <iostream>
#include <string>

using namespace std;

int main() {
    string fullName;
    string course;
    int score;

    cout<<"Enter full name of the student: ";
    getline(cin,fullName);

    cout<<"Enter the course: ";
    getline(cin,course);

    cout<<"Enter the score: ";
    cin>> score;

    char grade;

    if (score >= 70) {
        grade = 'A';
    } else if (score >= 60) {
        grade = 'B';
    } else if (score >= 50) {
        grade = 'C';
    } else if (score >= 40) {
        grade = 'D';
    } else if (score >= 0 && score < 40) {
        grade = 'F';
    } else {
        grade = 'I'; // Invalid score
    }

    cout << "Full Name: " << fullName << endl;
    cout << "Course: " << course << endl;
    cout << "Score: " << score << endl;
    cout << "Grade: " << grade << endl;

    return 0;

}