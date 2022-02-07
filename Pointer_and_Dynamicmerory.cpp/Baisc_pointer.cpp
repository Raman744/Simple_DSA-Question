#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 10;
    float y = 5.5;
    int *v = &x;

    int a = 10;
    int &c = a;
    c++;
    cout << a << endl;
    cout << c << endl;
    cout << &x << endl;
    cout << *v << endl;
    cout << &y << endl;
    cout << y << endl;
}