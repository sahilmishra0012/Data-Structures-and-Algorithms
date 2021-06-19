#include <iostream>
using namespace std;

int main()
{
    int a[10] = {1};
    int b[10] = {1, 2, 3};
    int c[10];
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << "   " << b[i] << "   " << c[i] << endl;
    }
    cout << "\nLength of Arrays:" << endl;
    cout << "A: " << sizeof(a) / sizeof(int) << endl;
    cout << "B: " << sizeof(b) / sizeof(int) << endl;
    cout << "C: " << sizeof(c) / sizeof(int) << endl;
}