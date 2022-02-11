#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;

    vector<int> autom(10, 7);

    vector<int> visited(100, 0);
    // puch_Back O(1)
    arr.push_back(10);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << autom[i] << " ";
    }
    cout << endl;
    cout << arr.size() << endl;

    cout << arr.capacity() << endl;
}