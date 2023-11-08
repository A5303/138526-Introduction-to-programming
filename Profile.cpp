#include <iostream>
using namespace std;

int main()
{
    string name,meal,movie,University,highschool;
    cout << "Enter your first name:";
    getline(cin,name);
    cout << "Enter your last name:";
    getline(cin,name);
    cout << "Enter your full name:";
    getline(cin,name);
    cout << "Enter your favourite meal:";
    getline(cin,meal);
    cout << "Enter your favourite movie:";
    getline(cin,movie);
    cout << "Enter University:";
    getline(cin,University);
    cout << "Enter highschool:";
    getline(cin,highschool);

    std::cout << "\nUserprofile:\n";
    std::cout << "Firstname:" << name << "\n"; 
    std::cout << "Lastname:" << name << "\n"; 
    std::cout << "Fullname:" << name << "\n"; 
    std::cout << "Favourite meal:" << meal << "\n"; 
    std::cout << "Favourite movie:" << name << "\n";  
    std::cout << "University:" << University << "\n"; 
    std::cout << "highschool:" << highschool << "\n"; 
    return 0;
}