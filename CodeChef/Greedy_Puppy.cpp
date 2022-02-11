#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, n, k, instance_Max, maxx = 0;
    cin >> T;
    while (T--)
    {
        cin >> n >> k;
        maxx = 0;
        for (int i = 1; i < k; i++)
        {
            instance_Max = n % i;
            if (instance_Max > maxx)
            {
                maxx = instance_Max;
            }
        }
        cout << maxx << endl;
    }
    return 0;
}