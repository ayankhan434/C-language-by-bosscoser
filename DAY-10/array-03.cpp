#include <iostream>
using namespace std;
int main()
{

    int arr[5] = {12, 23, 34, 56, 67};
    int n = sizeof(arr) / sizeof(int);

    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            cout << "assigning max to arr[" << i << "] which is " << arr[i] << endl;
        }
    }

    cout << "Maximum element is: " << max << endl;
    return 0;
}
