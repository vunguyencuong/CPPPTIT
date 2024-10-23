#include <bits/stdc++.h>
using namespace std;

int check(int n)
{
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int x, y;
	cin >> x >> y;
	if (x < 2)
		return 0;
	int test = 1;
	int result;
	for (int i = x + 1; i <= 50; i++)
	{
		if (check(i) == 1)
		{
			result = i;
			break;
		}
	}

	if (result == y)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
