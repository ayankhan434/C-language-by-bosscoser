#include <iostream>
using namespace std;

// Function to reverse number
int reverseNumber(int n)
{
    int rev = 0, temp;

    while (n != 0)
    {
        temp = n % 10;
        rev = rev * 10 + temp;
        n = n / 10;
    }

    return rev;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int result = reverseNumber(num);

    cout << "Reversed number = " << result;

    return 0;
}