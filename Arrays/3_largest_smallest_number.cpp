#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int a[10] = {21, 12, 23, 34, 95, 56, 87, 98, 29, 10};

    for (int i = 0; i < sizeof(a) / sizeof(int); i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
        if (a[i] < smallest)
        {
            smallest = a[i];
        }
    }
    cout << "Largest: " << largest << endl;
    cout << "Smallest: " << smallest << endl;
}