#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int sum = a + b;
    return sum;
}
int main()
{
    int s = sum(4, 5);
    cout << "the sum is: " << s;
    return 0;
}