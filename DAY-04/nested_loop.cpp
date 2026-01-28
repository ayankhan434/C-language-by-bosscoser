#include<iostream>
using namespace std;
int main () {
    // nested loop 
    for (int i=1; i<=4; i=i+1){
        cout<<"week "<<i<<endl;
        for (int d = 1; d<=7; d=d+1)
        {
            /* code */
            cout<<"  day "<<d<<endl;
        }
        
    }
    return 0;
}