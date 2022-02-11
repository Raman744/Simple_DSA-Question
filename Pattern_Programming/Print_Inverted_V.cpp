#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int print_x = num;
    int print_y = num;
    for (int out = 0; out < num; out++)
    {
        for (int row = 0; row < num * 2; row++)
        {
            if (row == print_x || row == print_y)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        print_x--;
        print_y++;
        cout << endl;
    }
}