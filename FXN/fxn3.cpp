#include <iostream>
using namespace std;

bool iseven(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    cout << "eneter the value of n: ";
    int n;
    cin >> n;

    cout << iseven(n);
    iseven(5);

    return 0;
}