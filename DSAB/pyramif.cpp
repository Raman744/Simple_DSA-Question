#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 6;

    int k = 2 * n - 2;

    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < n - i; j++)
            cout << "  ";
        k = k - 2;

        for (int j = 0; j < i; j++)
        {

            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}