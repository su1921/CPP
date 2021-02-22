#include <iostream>
using namespace std;

void pattern1 (int n)
{
    int i, j;

    for(i=0; i<n; i++)
    {
        for(j=0; j<=i; j++)
        {
           cout << "*";
        }
        cout << "\n";
    }

    cout << "\n";
}

void pattern2(int n)
{
    int i, j;

    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    cout << "\n";
}

void pattern3(int n)
{
    int i, j, k;

    for(i=0; i<n; i++)
    {
        for(j=i; j<n-1; j++)
        {
            cout << " ";
        }
        for(k=0; k<=i; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    cout << "\n";
}
void pattern4(int n)
{
    int i, j, k;

    for(i=0; i<n; i++)
    {
        for(k=0; k<i; k++)
        {
            cout << " ";
        }
        for(j=i; j<n; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    cout << "\n";
}

int main()
{
    int n;

    cout << "Enter a number : ";
    cin >> n;

    pattern1(n);
    pattern2(n);

    pattern3(n);
    pattern4(n);

    return 0;
}
