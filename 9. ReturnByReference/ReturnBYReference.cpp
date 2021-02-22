#include <iostream>
using namespace std;

int & max(int &x, int &y)
{
   if(x>y)
        return x;
   else
        return y;
}

int main()
{
    int x, y, a, b;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    a = x;
    b = y;
    max(a, b) = -1;

    if(a==-1)
        cout << "Big = " << x;
    else
        cout << "Big = " <<y;

    return 0;
}
