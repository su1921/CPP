#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    *a = (*a) + (*b);
    *b = (*a) - (*b);
    *a = (*a) - (*b);
}

int main()
{
    int a, b;

    cout << "Enter two number: ";
    cin >> a >> b;

    cout << "Before swap: a = " << a << " b = " << b << "\n";
    swap(a, b);
    cout << "After swap: a = " << a << " b = " << b << "\n";

    return 0;
}
