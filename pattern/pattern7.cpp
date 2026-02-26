#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enetr the value of n: ";
    cin >> n;

    int p;
    p = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << p << " ";
            p++;
        }
        cout << endl;
    }
    return 0;
}