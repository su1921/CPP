#include <iostream>
using namespace std;

void TOH(int n, char a, char b, char c)
{
    if(n == 1)
    {
        cout << a << " --> " << b << "\n";
        return;
    }

    TOH(n-1, a, c, b);
    cout << a << " --> " << b << "\n";
    TOH(n-1, c, b, a);
}

int main()
{
    int n;

    cout << "Enter number of disks: ";
    cin >> n;

    cout << "\n";
    TOH(n, '1', '2', '3');

    cout << "\n\n" << n << " disks shifted from tower 1 to tower 2 \n";

    return 0;
}
