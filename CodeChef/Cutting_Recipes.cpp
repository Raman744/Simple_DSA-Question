#include <bits/stdc++.h>
using namespace std;
// int gcd(int a, int b)
// {
//     if (a == 0)
//     {
//         return b;
//     }
//     if (b == 0)
//     {
//         return a;
//     }
//     if (a > b)
//     {
//         return gcd(b, a % b);
//     }
//     else
//     {
//         return gcd(a, b % a);
//     }
// }
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, ans;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        ans = __gcd(arr[0], arr[1]);
        for (int i = 2; i < N; i++)
        {

            ans = __gcd(ans, arr[i]);
        }
        for (int i = 0; i < N; i++)
        {
            cout << arr[i] / ans << " ";
        }
        cout << endl;
    }
    return 0;
}