#include<stdio.h>
#include<math.h>
typedef long long ll;
int Check(ll n)
{
	if( n < 2) return 0;
	for(int i = 2 ; i<= sqrt(n); i++)
	{
		if(n % i == 0) return 0;
	}
	return 1;
}

int main()
{
	ll n;
	scanf("%lld",&n);
	int tanso[100]={};
	int a[100]={};
	int b = 0;
	while(n > 0)
	{
		int m = n%10;
		if(Check(m) == 1)
		{
			a[b] = m;
			tanso[a[b]]++;
			b++;
		}
		n /= 10;
	}
	for(int i = b-1 ; i >= 0 ;i--)
	{
		if(tanso[a[i]] != 0)
		{
			printf("%d %d\n",a[i],tanso[a[i]]);
		}
		tanso[a[i]] = 0;
		
	//	printf("%d ",a[i]);
	}
}
