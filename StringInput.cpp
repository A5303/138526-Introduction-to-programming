#include <iostream>
using namespace std;

int main()
{
    string strl;
    cout << "Enter a long string: ";
    getline(cin,strl);
    cout << "You entered the following:" << endl;
    cout << strl << endl;
}