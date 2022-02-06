#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[] = "abcdeghi";
    cout << a << endl;

    char b[100];
    cin >> b;
    cout << b;

    cout << strlen(a) << endl; // number of visible characters
    cout << sizeof(a) << endl; //+1 beacuse null charter
}