#include <iostream>
using namespace std;

int main(){
    float age;
    cout<<"Please Enter age:";
    cin>>age;
    string message=(age>=4)?"Admitted! Proceed to registration": "Declined! Minimum Age not reached";
    cout<<message;
    return 0;
}