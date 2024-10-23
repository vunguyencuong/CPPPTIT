#include<stdio.h>
#include<math.h>
typedef long long ll;
int sum(ll n)
{
	if(n < 10) return n;
	int sum = 0;
	while(n)
	{
		sum += n%10;
		n /= 10;
	}
	if(sum % 10 == 0) return 1;
	return 0;
}

int check(ll n)
{
	ll m = n;
	ll res = 0;
	while(n)
	{
		int csc = n%10;
		if(csc == 4) return 0;
		res = res*10 + csc;
		n /= 10;
	}
	if(res == m) return 1;
	return 0;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		ll a= 1;
		ll b= 9;
		while(n-1)
		{
			a *= 10;
			b = b*10 + 9;
			n--;
		}
	//	printf("%lld %lld\n",a,b);
		for(int i = a; i <= b ;i++)
		{
			if(sum(i) == 1 && check(i) == 1) printf("%d ",i);
		}
		printf("\n");
		
	}
}
