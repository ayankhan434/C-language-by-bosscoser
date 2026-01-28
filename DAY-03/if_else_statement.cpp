#include <iostream>
using namespace std;
int main () {
    int score;
    cout <<"enter your score:";
    cin >> score;
    if(score>=95){
        cout <<"print you got A+"<<endl;
    }
    if(score<75)
    {
        /* code */
        cout <<"print you got C"<<endl;
    }
    else{
        cout <<"print you got B"<<endl;
    }
    // if else statement 
    int num;
    cout <<"enter a number of your choice:";
    cin >>num;
    if (num%5==0 && num%8==0)
    {
        /* code */
        cout <<"the number is dividible by  both 5 and 8"<<endl;
    }
    else if (num%5==0)
    {
        /* code */
        cout <<"your number is divisible by 5" <<endl;
    }
    else if (num%8==0)
    {
        /* code */
        cout <<"your number is divisible by 8"<<endl;
    }
    else{
        cout <<"your number is not divisible by both 5 and 8 try something nayaaa hehehe"<<endl;
    }

    // WAP TO FIND THE LARGEST NUMBER AMONG 3 NUMBERS WITHOUT USING LOGICAL OPERATOR
    int a,b,c;
    cout <<"enter three numbers of your choive:";
    cin>>a>>b>>c;
    if (a>b)
    {
        /* code */
        if (a>c)
        {
            /* code */
            cout <<"a is the largest number:"<<a<<endl;
        }
        else{
            cout <<"c is the largest number:"<<c<<endl;
        }
    }
    else{
        if (b>c)
        {
            /* code */
            cout <<"b is the largest number:"<<b<<endl;
        }
        else{
            cout <<"c is the largest number:"<<c<<endl;
        }
    }
    // now assignment time hehhe 
         // WAP TO FIND THE MAX OF 4 NUMBERS WITHOUT USING LOGICAL OPERATOR

         // sol. 
         int x,y,z,w;
            cout <<"enter x my bro:";
            cin>>x;
            cout<<"enter y my bro:";
            cin>>y;
            cout<<"enter z my bro:";
            cin>>z;
            cout<<"enter w my bro;";
            cin>>w;
            
     if(y>b){
        if(y>z){
            if(y>w){
                cout <<"y is the largest number in all of themmm:"<<y<<endl;
            }
            else{
                cout <<"w is the largest number in all of themm:"<<w<<endl;
            }
        }
        else{
            if(z>w){
                cout <<"z is the largest number in all of themm:"<<z<<endl;
            }
            else{
                cout <<"w is the largest number in all of themm:"<<w<<endl;
            }
        }
   }
   else{
        if(b>z){
            if(b>w){
                cout <<"b is the largest number in all of them:"<<b<<endl;
            }
            else{
                cout <<"w is the largest number in all of them:"<<w<<endl;
            }
        }
        else{
            if(z>w){
                cout <<"z is the largest number in all of them:"<<z<<endl;
            }
            else{
                cout <<"w is the largest number in all of them :"<<w<<endl;
            }
        }
   }
    
           // end of day 03 
           cout <<"end of day 03"<<endl;
    

    return 0;
}