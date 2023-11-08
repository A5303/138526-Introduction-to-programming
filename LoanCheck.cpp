#include <iostream>
using namespace std;

int main(){
    string Username;
    int age;
    int customerDuration;
    double bankBalance;
    bool crbStatus;
    cout<<"Please Enter Username:";
    cin>>Username;

    cout<<"Enter your age:";
    cin>>age;
    
   
    cout<<"Enter your bank balance:";
    cin>>bankBalance;
    
    
    cout<<"Is your CRB status good? (1 for yes, 0 for  no): ";
    cin>>crbStatus;
    
    
    cout<<"How many months have you been a customer: ";
    cin>>customerDuration;

    if (age > 22 && bankBalance > 50000 && crbStatus && customerDuration > 6) {
        cout<<"Congratulations! You are qualified for a loan." << endl;
    } else {
        cout<<"Sorry,you are not qualified for a loan." << endl;
    }
    return 0;
}