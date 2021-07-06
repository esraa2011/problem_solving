#include<iostream>
using namespace std;
//https://atcoder.jp/contests/abc181/tasks/abc181
/*
* Problem Statement
Takahashi is wearing white now.

He wears black on the day after he wears white, and he wears white on the day after he wears black.

What color will he wear 
N
 days later?
*/
int main()
{
    int x;
    cin >> x;
    if (x % 2 == 0)
    {
        cout << "white" << endl;
    }
    else
    {
        cout << "black" << endl;
    }

    return 0;
}
