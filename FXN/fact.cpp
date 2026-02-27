#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << fact << endl;
    return fact;
}

int main()
{
    int n;
    cout << "eneter the value of n: ";
    cin >> n;
    factorial(n);
    factorial(2);
    factorial(5);
    return 0;
}