#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    char s0[100] = "Today is a rainy day";
    char *ptr = strtok(s0, " ");
    cout << ptr << endl;
    while (ptr != NULL)
    {
        ptr = strtok(NULL, " ");
        cout << ptr << endl;
    }
}