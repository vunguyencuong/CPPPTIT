#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>

struct data
{
	char name1[100];
	char name2[100];
	int id;
	float buy;
	float sell;
	float money;
};

int main()
{
	int n;
	scanf("%d\n",&n);
	struct data a[n];
	for(int i = 0; i < n ;i++ )
	{
		gets(a[i].name1);
		gets(a[i].name2);
		scanf("%f",&a[i].buy);
		scanf("%f\n",&a[i].sell);
		a[i].id = i+1;
	}
	for(int i = 0; i < n;i++)
	{
		a[i].money = a[i].sell-a[i].buy;
	}
	struct data temp;
	for(int i = 0; i < n-1; i++)
	{
		for(int j = i+1; j < n ;j++)
		{
			if(a[i].money < a[j].money)
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(int i = 0 ; i < n ;i++)
	{
		printf("%d %s %s %.2f",a[i].id,a[i].name1,a[i].name2,a[i].money);
		printf("\n");
	}
}
