#include <iostream>
using namespace std;

void reverse(string &s, int left, int right)
{
    if (left >= right)
        return;
    swap(s[left], s[right]);
    reverse(s, left + 1, right - 1);
}

int main()
{
    string s;
    cin >> s;
    reverse(s, 0, s.size() - 1);
    cout << s ;
}