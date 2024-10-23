#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

long long Cp(ll n)
{
	if(sqrt(n)*sqrt(n) == n) return 1;
	else return 0;
}

long long unPer(ll a)
{
	ll sum = 1;
	for(int i = 2; i<= sqrt(a);i++)
	{
		if(a % i == 0)
		{
			sum += i + a/i;
		}
	}
	if(Cp(a) == 1) sum = sum - sqrt(a);
	return a-sum;
}

int main()
{
	int a,b;
	cin>> a >> b;
	ll result = 0;
	for(int i = a; i <= b ;i++)
	{
		result += unPer(i);
	}
	cout<< result << endl;
}
