#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[])
{
    cout << "In Main" << sizeof(arr) << endl;
}

int main()
{
    // int n;
    // cout << "Enter the no of students ";
    // cin >> n;
    // int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    // cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }

    int arr[] = {1, 2, 3, 4, 5, 6};
    int p = sizeof(arr) / sizeof(int);
    cout << "In Main" << sizeof(arr) << endl;
    printArray(arr);
    for (int i = 0; i < p; i++)
    {
        cout << arr[i] << endl;
    }
}