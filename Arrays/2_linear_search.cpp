#include <iostream>
using namespace std;

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int search = 20;
    int flag = 0;
    int i;

    for (i = 0; i < sizeof(a) / sizeof(int); i++)
    {
        if (a[i] == search)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << search << " found at " << (i + 1) << "th position" << endl;
    }
    else
    {
        cout << search << " not found" << endl;
    }
}