
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, a[10], size, temp;
    cout << "Enter array size( Max:10 : ";
    cin >> size;
    cout << "\nEnter array elements: ";

    for (i = 0; i < size; i++)
    {

        cin >> a[i];
    }

    cout << "\nData before sorting : ";

    for (i = 0; i < size; i++)
    {
        cout << " " << a[i] << " ";
    }

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << "\nData after sorting \n";
    for (j = size - 1; j >= 0; j--)
    {
        cout << " " << a[j] << " ";
    }
    cout << "\n";
    return 0;
}