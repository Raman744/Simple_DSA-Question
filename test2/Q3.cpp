#include <bits/stdc++.h>

using namespace std;

#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define ll long long int

int main()

{

    ll test_cases;

    cin >> test_cases;

    while (test_cases--)

    {

        ll n, l, i, counter;

        cin >> n >> l;

        vector<ll> vec(n);

        vector<ll> vec1(n);

        bool flag = false;

        for (i = 0; i < n; i++)

        {

            cin >> vec[i] >> vec1[i];

            if (vec1[i] - vec[i] == l)

            {

                flag = true;
            }
        }

        for (i = 0; i < n - 1; i++)

        {

            counter = 1;

            while (vec1[i] == vec[i + 1])

            {

                counter = counter + (vec1[i] - vec[i]);

                if (counter == l)

                {

                    flag = true;
                }

                i++;
            }
        }

        if (flag == true)

        {

            cout << "Yes" << endl;
        }

        else

        {

            cout << "No" << endl;
        }
    }

    return 0;
}