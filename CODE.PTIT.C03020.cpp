#include<stdio.h>
#include<math.h>
int check(long long n)
{
	while(n > 0)
	{
		long long csc = n % 10;
		n /= 10;
		if(csc == 6) 
		{
			return 1;
			break;
		}
	}
	return 0;
}
int check2(long long n)
{
	long long sum = 0;
	while(n > 0)
	{
		long long csc = n % 10;
		sum += csc;
		n /= 10;
	}
	if(sum % 10 == 8) return 1;
	else return 0;
}
int check3(long long n)
{
	if(n < 10) return 1;
	else
	{
		long long rev_n = 0;
		long long m = n;
		while(m > 0)
		{
			long long csc = m%10;
			rev_n = rev_n *10 + csc;
			m /= 10;
		}
		if(n == rev_n) return 1;
		else return 0;
	}
}
int main()
{
	long long a,b;
	scanf("%lld %lld",&a,&b);
	if(a > b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	for(long long i = a; i <= b; i++)
	{
		if(check(i) == 1 && check2(i) == 1 && check3(i) == 1) printf("%lld ",i);
	}
	
}
