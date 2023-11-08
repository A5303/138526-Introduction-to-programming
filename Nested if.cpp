#include <iostream>
using namespace std;

int main(){
    int age;
    string interest, interest2;
    cout<<"Please Enter the child's age:";
    cin>>age;
    if (age>=4&&age<=10){
        cout<<"Please Enter interest:";
        cin>>interest;
        if (interest=="Soccer"){
            cout<<"Admit and assign to soccer playgroup";
        }
        if (interest=="art") {
            cout<<"Admit and assign to Art group";
            cin>>interest2;
        } else {
            cout<<"Admit to other group";
        }
    } else {
        cout<<"Admission unsuccessful. Age is invalid";
    }
    return 0;
}