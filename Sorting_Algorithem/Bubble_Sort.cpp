#include <bits/stdc++.h>
using namespace std;

void bubble_Sort(int arr[], int n)
{
    for (int times = 1; times <= n - 1; times++)
    {
        for (int j = 0; j <= n - times - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {-2, 3, 4, -1};
    int n = sizeof(arr) / sizeof(int);
    bubble_Sort(arr, n);
    for (auto z : arr)
    {
        cout << z << ",";
    }

    return 0;
}