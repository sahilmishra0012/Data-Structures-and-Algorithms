#include <iostream>
using namespace std;

int main()
{
    char a[1000];
    cin.getline(a, 1000, '\n');
    cout << a << endl;
    cin.getline(a, 1000, '$');
    cout << a << endl;
}