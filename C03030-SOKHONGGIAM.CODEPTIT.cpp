#include<stdio.h>
#include<math.h>
typedef long long ll;

int check(ll n)
{
	while(n)
	{
		int x = n%10;
		int y = (n/10)%10;
		n /= 10;
		if(x < y) return 0;
		return 1;
	}
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll a = 1;
		ll b = 9;
		int n;
		scanf("%d",&n);
		while(n-1 > 0)
		{
			a = a*10;
			b = b*10 + 9;
			n--;
		}
		for(int i = a; i <= b ;i++)
		{
			if(check(i) == 1) printf("%d ",i);
		}
		printf("\n");
	}
}
