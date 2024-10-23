#include<stdio.h>
#include<math.h>
typedef long long ll;
ll thuanNghich(ll n)
{
	ll m = n;
	ll res = 0;
	while(n > 0)
	{
		res = res*10 + n%10;
		n /= 10;
	}
	if(m == res) return 1;
	else return 0;
}

ll Cs(ll n)
{
	ll sum = 0;
	while(n > 0)
	{
		sum += n%10;
		n /= 10;
	}
	if(sum % 10 == 0) return 1;
	else return 0;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int count = 0;
		ll a = 1;
		ll b = 9;
		while(n-1 > 0)
		{
			a = a*10 ;
			b = b*10 + 9;
			n--;
		}
		for(ll i = a; i <= b ;i++)
		{
			if(thuanNghich(i) == 1 && Cs(i) == 1) count++;
		}
		printf("%d\n",count);
	}
}
