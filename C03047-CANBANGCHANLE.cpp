#include<stdio.h>
#include<math.h>

int count1(int n)
{
	int odd = 0;
	while(n)
	{
		int x = n%10;
		if(x % 2 != 0 ) odd++;
		n /= 10;
	}
	return odd;
}
int count2(int n)
{
	int even = 0;
	while(n)
	{
		int x = n%10;
		if(x % 2 == 0) even++;
		n /= 10;
	}
	return even;
}
int main()
{
	int n;
	scanf("%d",&n);
	int a = 1;
	int b = 9;
	while(n-1)
	{
		a = a*10;
		b = b*10 + 9;
		n--;
	}
	int dem = 0;
	for(int i = a; i <= b; i++)
	{
		if(count1(i) == count2(i))
		{
			printf("%d ",i);
			dem++;
		}
		if(dem % 10 == 0 && dem != 0) printf("\n");
	}
	
	
}
