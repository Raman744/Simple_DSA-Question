#include <bits/stdc++.h>
using namespace std;

// function check Palindrome
bool isPalindrome(string n)
{
    for (int i = 0; i < n.size() / 2; i++)
        if (n[i] != n[n.size() - 1 - i])
            return false;
    return true;
}

// convert number into String
string convertNumIntoString(int num)
{

    // base case:
    if (num == 0)
        return "0";

    string Snum = "";
    while (num > 0)
    {
        Snum += (num % 10 - '0');
        num /= 10;
    }
    return Snum;
}

// function return closest Palindrome number
int closestPlandrome(int num)
{
    int SPNum = num + 1;

    while (!isPalindrome(convertNumIntoString(SPNum)))
        SPNum++;
    return SPNum;
}

// Driver program to test above function
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int num;
        cin >> num;
        int ans = closestPlandrome(num);
        cout << ans << " " << (ans - num) << endl;
    }

    return 0;
}