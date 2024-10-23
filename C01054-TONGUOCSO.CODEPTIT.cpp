#include<stdio.h>
#include<math.h>
typedef long long ll;
int Sum(int n)
{
	int sum = 0;
	if(n < 2) return 0;
	while(n % 2 == 0)
	{
		n /= 2;
		sum += 2;
	}
	for(int i = 3; i*i <= n ;i+=2)
	{
		if(n % i == 0)
		{
			while(n % i == 0)
			{
				n /= i;
				sum += i;
			}
		}
	}
	if(n > 1) sum += n;
	return sum;
}

int a[1000000];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n;i++)
	{
		scanf("%d",&a[i]);
	}
	ll result = 0;
	for(int i = 0; i < n ;i++)
	{
		result += Sum(a[i]);
	}
	printf("%lld",result);
}
