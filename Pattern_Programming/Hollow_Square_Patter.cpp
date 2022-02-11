#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    for (int row = 0; row <= num; row++)
    {
        for (int col = 0; col <= num; col++)
        {
            if (row == 0 || row == num || col == 0 || col == num)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}