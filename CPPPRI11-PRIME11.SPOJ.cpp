#include <bits/stdc++.h>
#include <math.h>
using namespace std;
long long isPrime(long long n)
{
	if (n < 2)
		return false;
	for (int i = 2; i * i <= n; ++i)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}
int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int check = 0;
		long long n;
		cin >> n;
		for (int i = 2; i < 20; i++)
		{
			if (isPrime(i) && isPrime(pow(2, i) - 1))
			{
				if (pow(2, 2 * i) - pow(2, i) == 2 * n)
				{
					cout << 1 << endl;
					check = 1;
					break;
				}
			}
		}
		if (!check)
			cout << 0 << endl;
	}
}
