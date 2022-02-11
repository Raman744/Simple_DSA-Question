#include <bits/stdc++.h>
using namespace std;
int maxProfit(int prices[], int n)
{
    int maxprofit = 0;
    for (int i = 1; i < n; i++)
    {
        if (prices[i] > prices[i - 1])
            maxprofit += prices[i] - prices[i - 1];
    }
    return maxprofit;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << maxProfit(a, n);
    return 0;
}