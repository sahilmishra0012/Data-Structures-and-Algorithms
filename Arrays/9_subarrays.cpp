#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int a[10] = {21, 12, 23, 34, 95, 56, 87, 98, 29, 10};
    for (int i = 0; i < sizeof(a) / sizeof(int); i++)
    {
        for (int j = i; j < sizeof(a) / sizeof(int); j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << a[k] << " ";
            }
            cout << endl;
        }
    }
}