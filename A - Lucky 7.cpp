#include <iostream> 
#include <string> 
using namespace std;
//https://atcoder.jp/contests/abc162/tasks/abc162_a?lang=en
int main()
{
    int n, c = 0;
    string str;
    cin >> n;
    if (n >= 100 && n <= 999)
    {
        str = to_string(n);
        for (int i = 0;i < 3;i++)
        {
            if (str[i] == '7')
            {
                c++;
            }
        }
        if (c > 0)
        {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }

    return 0;
}