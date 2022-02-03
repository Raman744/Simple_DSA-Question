#include <bits/stdc++.h>
using namespace std;

// void reverseArray(int arr[], int n)
// {
//     for (int i = n - 1; i >= 0; i--)
//     {
//         cout << arr[i] << " ";
//     }
// }

void ReverseArray(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(arr[s], arr[e]);
        s += 1;
        e -= 1;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(int);
    // reverseArray(arr, n);

    ReverseArray(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}