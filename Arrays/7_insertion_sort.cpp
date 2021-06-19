#include <iostream>
#include <climits>
using namespace std;

void insertion_sort(int a[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int e = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > e)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = e;
    }
}

int main()
{
    int a[10] = {21, 12, 23, 34, 95, 56, 87, 98, 29, 10};
    insertion_sort(a, sizeof(a) / sizeof(int));
    for (int i = 0; i < sizeof(a) / sizeof(int); i++)
    {
        cout << a[i] << " ";
    }
}