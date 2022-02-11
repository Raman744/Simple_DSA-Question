#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int star_print = 1;
    for (int out = 0; out < num; out++)
    {
        for (int row = num - 1; row > out; row--)
            cout << " ";
        for (int col = 0; col < star_print; col++)
            cout << "*";
        star_print += 2;
        cout << endl;
    }
}