#include<iostream>
using namespace std;
//https://atcoder.jp/contests/abc189/tasks/abc189_a
int main()
{
    char s[3];
    for (int i = 0;i < 3;i++)
    {
        cin >> s[i];
    }
    if (s[0] == s[1] && s[1] == s[2])
    {
        cout << "Won" << endl;
    }
    else
    {
        cout << "Lost" << endl;
    }

    return 0;
}
