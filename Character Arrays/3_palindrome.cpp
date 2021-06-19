#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[1000];
    cin >> a;
    int i = 0;
    int j = strlen(a) - 1;
    int flag = 1;
    while (i < j)
    {
        if (a[i] == a[j])
        {
            i++;
            j--;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }
}