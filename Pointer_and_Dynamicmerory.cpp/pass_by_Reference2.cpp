#include <iostream>
using namespace std;

void watch_Video(int &views)
{
    views = views + 1;
}

int main()
{
    int views = 100;
    watch_Video(views);
    cout << views;
    return 0;
}