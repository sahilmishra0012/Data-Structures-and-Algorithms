#include <iostream>
#include <climits>
using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

void bubble_sort(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (compare(a[j], a[j + 1]))
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int a[10] = {21, 12, 23, 34, 95, 56, 87, 98, 29, 10};
    bubble_sort(a, sizeof(a) / sizeof(int));
    for (int i = 0; i < sizeof(a) / sizeof(int); i++)
    {
        cout << a[i] << " ";
    }
}