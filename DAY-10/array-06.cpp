#include <iostream>
using namespace std;

int printarr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
}
int main()
{
    int arr[] = {
        2,
        3,
        5,
        6,
        8,
        5,
        4};
    int n = sizeof(arr) / sizeof(int);

    int start = 0, end = n - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    printarr(arr, n);
    return 0;
}