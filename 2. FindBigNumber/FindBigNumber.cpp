#include <iostream>
using namespace std;

#define MAX(a, b) ((a>b)? a: b)
int main()
{
    int a, b, c, d;

    cout << "Enter four numbers : ";
    cin >> a >> b >> c >> d;

    a = MAX(a, b);
    c = MAX(c, d);
    a = MAX(a, c);

    cout << "Big number = " << a << "\n";

    return 0;
}
