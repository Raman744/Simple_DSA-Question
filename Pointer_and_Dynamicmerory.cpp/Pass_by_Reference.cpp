#include <iostream>
using namespace std;

// pass by reference
void applyTax(int &money)
{
    float tax = 0.10;
    money = money - money * tax;
    cout << money << endl;
}

int main()
{
    int income;
    cin >> income;

    applyTax(income);
    cout << income << endl;
}