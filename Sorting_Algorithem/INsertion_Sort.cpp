#include <bits/stdc++.h>
using namespace std;

void Insertion_Sort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int current = arr[i];
        int prev = i - 1;
        while (prev >= 0 and arr[prev] > current)
        {
            arr[prev + 1] = arr[prev];
            prev = prev - 1;
        }
        arr[prev + 1] = current;
    }
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    Insertion_Sort(arr, n);
    for (auto z : arr)
    {
        cout << z << ",";
    }

    return 0;
}