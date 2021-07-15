#include <iostream>

using namespace std;
//https://www.e-olymp.com/en/problems/75
int main()
{
    int a, b, d = 1;
    cin >> a >> b;
    int c = a + 1;
    int sum = 0;
    while (sum != b)
    {
        sum = a + (c * 2);
        if (sum == b)
        {
            d++;
            break;

        }

        else
        {
            d++;
            c++;
            a = a + c;
            sum = 0;
        }


    }
    cout << d << endl;
    return 0;
}