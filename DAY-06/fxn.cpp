#include <iostream>
using namespace std;
int addtwointegers(int &a, int &b)
{
    a = a + 1;
    return a + b;
}
int main()
{
    int a = 5;
    int b = 994;
    int c = addtwointegers(a, b);
    cout << c << endl;
    cout << a << endl;

    return 0;
}