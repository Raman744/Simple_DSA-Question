#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    int small, next_small = INT_MAX;
    small = arr[0];
    for (int i = 1; i < N; i++)
    {
        if (arr[i] < small)
        {
            next_small = small;
            small = arr[i];
        }
        else if (arr[i] < next_small and arr[i] > small)
            next_small = arr[i];
    }
    cout << "Smallest and the second smallest numbers are respectively " << small << " and " << next_small << endl;
    return 0;
}