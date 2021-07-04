#include <iostream>
using namespace std;
/*
https://codeforces.com/gym/102397/problem/B
Mahmoud bought a rectangular shaped land, it's area was n units2.

His best friend Ayoub asked him to calculate the height and the width of the land.

Mahmoud hates math, can you help him to calculate the heightand the width of the land ?

If there are multiple solutions print any of them.

Input
The input contains single integer n, (1?n?200) represent the area

Output
Print two integers that represent the heightand the width of the rectangle, if there are multiple solutions print any of them.
*/
int main() {
    int n, i, x,y;
    cin >> n;
    for (i = 1;i <= 12;i++)
    {
        if (n % i == 0)
        {
            x = n / i;
            y = i;

        }
      
    }
    cout << x <<endl<< y<<endl;
    return 0;
}
