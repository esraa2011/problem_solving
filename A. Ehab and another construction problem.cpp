#include <iostream>
using namespace std;
//https://codeforces.com/contest/1088/problem/A
int main()
{
    int a = 0, b = 0, x, m = 0;
    cin >> x;
    for (int i = 1;i <= x;i++)
    {
        for (int o = 1;o <= x;o++)
        {
            if (i % o == 0 && i * o > x && (i / o) < x)
            {
                a = i;
                b = o;
                m++;
            }

        }
    }

    if (m > 0)
    {
        cout << a << " " << b << endl;
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}