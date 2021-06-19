#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[1000];
    cin >> a;
    int len = strlen(a);
    if (len == 1 || len == 0)
    {
        cout << a << endl;
    }
    int prev = 0;
    for (int curr = 1; curr < len; curr++)
    {
        if (a[curr] == a[prev])
        {
            continue;
        }
        else
        {
            prev++;
            a[prev] = a[curr];
        }
    }
    a[prev + 1] = '\0';
    cout << a << endl;
}