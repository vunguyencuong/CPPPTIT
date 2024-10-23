#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>

struct data
{
	char name[1000];
	char date[1000];
	float one;
	float two;
	float three;
	int id;
	float sum;
};


int main()
{
	int n;
	scanf("%d\n",&n);
	struct data a[n];
	for(int i = 0; i < n;i++)
	{
		gets(a[i].name);
		gets(a[i].date);
		scanf("%f",&a[i].one);
		scanf("%f",&a[i].two);
		scanf("%f\n",&a[i].three);
	}
	for(int i = 0; i < n ;i++)
	{
		a[i].sum = a[i].one + a[i].three + a[i].two;
		a[i].id = i+1;
	}
	//struct data temp;
	float max = a[0].sum;
	for(int i = 0; i < n; i++)
	{
		if(max < a[i].sum)
		{
			max = a[i].sum;
		}
	}
	for(int i = 0; i < n; i++)
	{
		if(a[i].sum == max)
		{
			printf("%d %s %s %.1f\n",a[i].id,a[i].name,a[i].date,a[i].sum);
		}
	}
	
}
