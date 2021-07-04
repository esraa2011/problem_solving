#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int v=0, s=0;

    int a[3];

    int b[3];
    /*
    for (int i = 0;i < 3;i++)
    {
        cin >> a[i];

    }
    for (int i = 0;i < 3;i++)
    {
        cin >> b[i];

    }
    */
    for (int i = 0;i < 3;i++)
    {

        cin >> a[i];
        cin >> b[i];
        if (a[i] > b[i])
        {
            v++;
        }
        else if (b[i] > a[i])
        {
            s++;
        }
    }
    cout << v << endl << s << endl;
 
    return 0;
}
