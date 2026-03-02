#include <iostream>
using namespace std;
int main()
{
    int marks[5] = {10, 20, 30, 40, 50};
    cout << marks[0] << endl; // 10
    cout << marks[1] << endl; // 20
    cout << marks[2] << endl; // 30
    cout << marks[3] << endl; // 40
    cout << marks[4] << endl; // 50
    cout << sizeof(marks) / sizeof(int) << endl;
    return 0;
}