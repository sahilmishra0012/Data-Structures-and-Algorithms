#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

int main()
{
    int a[10] = {21, 12, 23, 34, 95, 56, 87, 98, 29, 10};
    sort(a, a + sizeof(a) / sizeof(int), compare);
    for (int i = 0; i < sizeof(a) / sizeof(int); i++)
    {
        cout << a[i] << " ";
    }
}