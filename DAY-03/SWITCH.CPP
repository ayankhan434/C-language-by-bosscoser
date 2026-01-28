#include<iostream>
using namespace std;
int main () {
    int grade;
    cout<<"enter your integer:";
    cin>>grade;
    switch(grade){
        case 10:
        cout<<"outstanding, A++"<<endl;
        break;
        case 11:
        cout<<"A+"<<endl;
        break;
        case 12:
        cout<<"you got A rating "<<endl;
        break;
        cout<<"you are fail , better luck next time "<<endl;
        break;
        default :
        
        cout<<"try again and enter number 11 or 10" <<endl;

    }

    return 0;
}