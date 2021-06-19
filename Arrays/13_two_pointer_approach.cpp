// Kadane's Algorithm
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int a[8] = {1, 3, 5, 7, 10, 11, 12, 13};
    int sum = 18;
    int i = 0;
    int j = 8;
    while (i <= j)
    {
        int curr_sum = a[i] + a[j];
        if (curr_sum > sum)
        {
            j--;
        }
        else if (curr_sum < sum)
        {
            i++;
        }
        else if (curr_sum == sum)
        {
            cout << a[i] << " " << a[j] << endl;
            i++;
            j--;
        }
    }
}