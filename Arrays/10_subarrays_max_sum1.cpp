#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int max_sum = INT_MIN;
    int pos_i = -1;
    int pos_j = -1;
    int a[9] = {-4, 1, 3, -2, 6, 2, -8, -9, 4};
    for (int i = 0; i < sizeof(a) / sizeof(int); i++)
    {
        for (int j = i; j < sizeof(a) / sizeof(int); j++)
        {
            int current_sum = 0;
            for (int k = i; k <= j; k++)
            {
                current_sum = current_sum + a[k];
            }
            if (current_sum > max_sum)
            {
                max_sum = current_sum;
                pos_i = i;
                pos_j = j;
            }
        }
    }
    cout << max_sum << endl;
    for (int k = pos_i; k <= pos_j; k++)
    {
        cout << a[k] << " ";
    }
    cout << endl;
}