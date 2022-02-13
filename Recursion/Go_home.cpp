#include <bits/stdc++.h>
using namespace std;

void goHome(int x, int Home)
{
    if (x == Home)
    {
        printf("Reach Home");
        return;
    }
    x = x + 1;
    goHome(x, Home);
}
int main()
{
    int x = 1;
    int Home = 10;
    goHome(x, Home);
    return 0;
}