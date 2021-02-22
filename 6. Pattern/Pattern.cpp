#include <iostream>
using namespace std;

#define MAX(a,b) ((a>b)? a: b)
int main()
{
    int n, i, j;

    cout << "Enter size of grid: ";
    cin >> n;

    for(i=-n+1; i<n; i++)
    {
        for(j=-n+1; j<n; j++)
        {
            cout << MAX(abs(i), abs(j))+1 << " ";
        }
        cout << "\n";
    }

    return 0;
}
