#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s0;
    string s1("hello");
    string s2 = "hello world";
    string s3(s2);
    string s4 = s3;
    char a[] = {'a', 'b', 'c', '\0'};
    string s5(a);
    if (s0.empty())
    {
        cout << "s1 is empty" << endl;
    }
    s1.append(" sahil");
    cout << s1 << endl;

    s1 += " I am good boy";
    cout << s1 << endl;

    cout << s1.length() << endl;
    s1.clear();
    cout << s1.length() << endl;

    cout << s5.compare(s2) << endl;

    // Overloaded operators
    if (s2 > s5)
    {
        cout << "s5 is alphabetically higher" << endl;
    }
    if (s2 < s5)
    {
        cout << "s2 is alphabetically higher" << endl;
    }

    string s = "I want an apple to eat";
    string word = "apple";
    int idx = s.find(word);
    cout << idx << endl;

    s.erase(idx, word.length());
    cout << s << endl;

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << (*it);
    }
    cout << endl;
    for (auto c : s1)
    {
        cout << c;
    }
    cout << endl;
}