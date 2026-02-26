#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enetr the value of n: ";
    cin >> n;
    cout << "the result is:";

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - 1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}