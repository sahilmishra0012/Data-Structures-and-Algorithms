#include <iostream>
#include <climits>
using namespace std;

bool compare(int a, int b)
{
    return a < b;
}

void selection_sort(int a[], int size, bool (&cmp)(int a, int b))
{
    for (int i = 0; i < size; i++)
    {
        int pos = i;
        for (int j = i; j < size; j++)
        {
            if (cmp(a[j], a[pos]))
            {
                pos = j;
            }
        }
        int temp = a[i];
        a[i] = a[pos];
        a[pos] = temp;
    }
}

int main()
{
    int a[10] = {21, 12, 23, 34, 95, 56, 87, 98, 29, 10};
    selection_sort(a, sizeof(a) / sizeof(int), compare);
    for (int i = 0; i < sizeof(a) / sizeof(int); i++)
    {
        cout << a[i] << " ";
    }
}