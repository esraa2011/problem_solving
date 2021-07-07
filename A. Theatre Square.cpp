
#include<iostream>
#include<cmath>
//https://codeforces.com/problemset/problem/1/A
	using namespace std;
	int main()
	{
		long long m, n, a, v;
		cin >> m >> n >> a;
		v = ceil((double)m / a) * ceil((double)n / a);
		cout << v << endl;
		return 0;
	}



