#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {10, 11, 2, 3, 4, 6, 7, 8};
    int key;
    cin >> key;
    vector<int>::iterator it = find(arr.begin(), arr.end(), key);
    if (it != arr.end())
    {
        cout << it - arr.begin();
    }
    else
    {
        cout << "Elemet not found " << endl;
    }

    return 0;
}