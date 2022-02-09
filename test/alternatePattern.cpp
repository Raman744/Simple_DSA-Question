#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k, i, j;
    int sc, hc;
    sc = 1;
    hc = n - 1;

    for (k = 0; k < n; k++)
    {
        if (k % 2 == 0)
        {
            for (i = 1; i <= sc; i++)
            {
                cout << "*";
            }
            for (j = 1; j <= hc; j++)
            {
                cout << "#";
            }
        }

        else
        {
            for (i = 1; i <= hc; i++)
            {
                cout << "#";
            }
            for (j = 1; j <= sc; j++)
            {
                cout << "*";
            }
        }
        cout << endl;
        if (k < n / 2)
        {
            sc++;
            hc--;
        }
        else
        {
            sc--;
            hc++;
        }
    }
}