#include <iostream>
using namespace std;

int main()
{
    char a[] = {'a', 'b', 'c', '\0'}; // Good practice to end by null
    cout << a << endl;
    char b[10];
    cin >> b;
    cout << b << endl;
    char c[] = {'h', 'e', 'l', 'l', 'o', '\0'}; // If not terminated with \0, some garbage value gets appended to it.
    char d[] = "Sahil";
    cout << c << " " << sizeof(c) << endl;
    cout << d << " " << sizeof(d) << endl;
}