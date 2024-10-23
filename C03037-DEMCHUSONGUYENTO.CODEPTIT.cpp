#include<stdio.h>
typedef long long ll;

int main()
{
	ll n;
	scanf("%lld",&n);
	int ts[100]={};
	int a[100]={};
	int b = 0;
	while(n)
	{
		int x = n%10;
		a[b] = x;
		b++;
		if(x == 2 || x == 3 || x == 5 || x == 7) ts[x]++;
		n /= 10;
	}
	for(int i = b-1; i >= 0 ;i--)
	{
		if(ts[a[i]] >= 1) 
		{
			printf("%d %d\n",a[i],ts[a[i]]);
			ts[a[i]] = 0;
		}
	}
}
