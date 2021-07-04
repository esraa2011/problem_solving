#include<iostream>
#include <iomanip>
using namespace std;

//https://www.codechef.com/problems/HS08TEST
int main()
{
	int x;
	double y, s;
	cin >> x;
	cin >> y;
	if ((x > 0 && x <= 2000) && (y >= 0 && y <= 2000))
	{

		if (x % 5 == 0 && y - 0.50 >= x)
		{
			s = (y - x) - 0.50;
			cout << fixed << setprecision(2) << s << endl;
		}
		else
		{
			s = y;
			cout << fixed << setprecision(2) << s << endl;
		}

	}
	return 0;
}