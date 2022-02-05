#include <bits/stdc++.h>
using namespace std;
#include <string.h>

int main()
{
    char string[] = "Raman      shah  is  a  boy";
    char ch = ' ';

    // Replace space with specific character ch
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '      ')
            string[i] = ch;
    }

    cout << "String after replacing spaces with given character: " << endl;
    cout << string;

    return 0;
}