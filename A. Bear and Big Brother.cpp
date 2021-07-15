#include <iostream>
using namespace std;
//https://codeforces.com/contest/791/problem/A
int main()
{
    int a, b, i = 0;
    cin >> a >> b;
    if (a >= 1 && b >= a && b <= 10)
    {
        while (a <= b)
        {
            a *= 3;
            b *= 2;
            i++;
        }
        cout << i << endl;
    }

    return 0;
}