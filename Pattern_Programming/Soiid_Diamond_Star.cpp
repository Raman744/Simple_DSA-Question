#include <bits/stdc++.h>
using namespace std;
int main()
{

    int num;
    cin >> num;
    for (int out = 0; out < num; out++)
    {
        for (int row = num; row > out; row--)
            cout << " ";
        for (int col = 0; col < out; col++)
            cout << "* ";
        cout << endl;
    }
    for (int out = 0; out < num; out++)
    {
        for (int row = 0; row < out; row++)
            cout << " ";
        for (int col = 0; col < num - out; col++)
            cout << "* ";
        cout << endl;
    }
}