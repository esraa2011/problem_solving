#include <iostream>
using namespace std;
//https://codeforces.com/contest/231/problem/A
int main()
{
    int t, a, b, c, d = 0;
    cin >> t;
    for (int i = 0;i < t;i++)
    {
        cin >> a >> b >> c;


        if ((a == 1 && b == 1) || (a == 1 && c == 1) || (b == 1 && c == 1))
        {
            d++;
        }


    }
    cout << d << endl;
    return 0;
}