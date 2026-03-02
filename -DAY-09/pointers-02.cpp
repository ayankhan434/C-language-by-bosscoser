#include <iostream>
using namespace std;
int main()
{
    int x = 10, y = 20;
    cout << x << " " << y << endl;
    int *ptr1 = &x;                        // pointer to x
    int *ptr2 = &y;                        // pointer to y
    ptr2 = ptr1;                           // ptr2 now points to x
    cout << *ptr1 << " " << *ptr2 << endl; // dereferencing
    cout << ptr1 << "= " << ptr2 << endl;  // addresses stored in pointers
    return 0;
}