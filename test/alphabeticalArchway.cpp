#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int space = 1;
    int n;
    cin >> n;
    int CH = n + 64;
    for (i = 1; i <= n; i++)
    {
        for (j = 'A'; j <= CH; j++)
            cout << ((char)(j));

        if (i == 1)
            cout << "\b";

        for (j = 1; j < space; j++)
            cout << " ";

        for (j = CH; j >= 'A'; j--)
            cout << ((char)(j));

        cout << endl;
        CH--;
        if (space == 1)
            space += 1;
        else
            space += 2;
    }
    return 0;
}