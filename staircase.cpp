#include <bits/stdc++.h>
using namespace std;

void staircase(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "#";
        }
        cout << endl;
    }
}

int main()
{

    int n;
    cout << "Enter the number : ";
    cin >> n;
    staircase(n);

    return 0;
}