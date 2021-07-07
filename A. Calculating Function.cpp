#include<bits/stdc++.h>
//https://codeforces.com/contest/486/problem/A
using namespace std;
int main()
{
    long long n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2 << endl;
    }
    else
    {
        cout << -(n + 1) / 2;
    }
    return 0;
}
