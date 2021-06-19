#include <iostream>
using namespace std;

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int search = 3;
    int flag = 0;
    int pos = -1;
    int lower = 0;
    int upper = sizeof(a) / sizeof(int) - 1;
    while (lower <= upper)
    {
        int mid = (lower + upper) / 2;
        if (a[mid] == search)
        {
            flag = 1;
            pos = mid;
            break;
            // If break not used, the loop will not exit as the element searching needs to be
            // stopped from here but not lower and upper bounds are updated from here.
        }
        if (a[mid] > search)
        {
            upper = mid - 1;
        }
        else if (a[mid] < search)
        {
            lower = mid + 1;
        }
    }
    if (flag == 1)
    {
        cout << search << " found at " << (pos + 1) << " position" << endl;
    }
    else
    {
        cout << search << " not found" << endl;
    }
}