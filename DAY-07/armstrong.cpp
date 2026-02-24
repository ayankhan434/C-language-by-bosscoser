#include <iostream>
using namespace std;

// Function to check Armstrong number
bool isArmstrong(int n)
{
    int original = n;
    int temp, sum = 0;

    while (n != 0)
    {
        temp = n % 10;
        sum = sum + (temp * temp * temp);
        n = n / 10;
    }

    return (sum == original);
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num))
        cout << num << " is an Armstrong number";
    else
        cout << num << " is NOT an Armstrong number";

    return 0;
}