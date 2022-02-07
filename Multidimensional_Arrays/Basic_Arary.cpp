#include <bits/stdc++.h>
using namespace std;

void print(int arr[][100], int n, int m)
{
    // print
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}

int main()
{
    // constrain
    int arr[100][100];
    int n, m;
    // n rows m colums
    cin >> n >> m;

    // take input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; i++)
        {
            cin >> arr[i][j];
        }
    }
    // print the array
    print(arr, n, m);
}