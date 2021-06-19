// Kadane's Algorithm
#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int pos_i = 0;
    int pos_j = 0;
    int s = 0;
    int a[9] = {-4, 1, 3, -2, 6, 2, -8, -9, 4};
    int curr_sum = 0;
    int max_sum = INT_MIN;

    for (int i = 0; i < sizeof(a) / sizeof(int); i++)
    {
        curr_sum = curr_sum + a[i];
        if (curr_sum < 0)
        {
            curr_sum = 0;
            s = i + 1;
        }

        if (curr_sum > max_sum)
        {
            max_sum = curr_sum;
            pos_i = s;
            pos_j = i;
        }
    }
    cout << max_sum << endl;
    for (int k = pos_i; k <= pos_j; k++)
    {
        cout << a[k] << " ";
    }
    cout << endl;
}