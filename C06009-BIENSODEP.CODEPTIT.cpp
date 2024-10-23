#include<stdio.h>
#include<string.h>

int Test1(int a[])
{
	int check = 1;
	for(int i = 0; i <= 3 ;i++)
	{
		if(a[i] >= a[i+1])
		{
			check = 0;
			break;
		}
	}
	if(check == 1) return 1;
	else return 0;
}
int Test2(int a[])
{
	if(a[0] == a[1] && a[1] == a[2] && a[2] == a[3] && a[3] == a[4]) return 1;
	else return 0;
}
int Test3(int a[])
{
	if(a[0] == a[1] && a[1] == a[2] && a[3] == a[4]) return 1;
	else return 0;
}
int Test4(int a[])
{
	int check = 1;
	for(int i = 0; i <= 4 ;i++)
	{
		if(a[i] != 6 && a[i] != 8)
		{
			check = 0;
			break;
		}
	}
	if(check == 1) return 1;
	else return 0;
}
int main()
{
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		char s[1000];
		gets(s);
		int a[10]={};
		a[0] = s[6]-'0';
		a[1] = s[7]-'0';
		a[2] = s[8]-'0';
		a[3] = s[10]-'0';
		a[4] = s[11]-'0';
		if(Test1(a) == 1 || Test2(a) == 1 || Test3(a) == 1 || Test4(a) == 1) printf("YES\n");
		else printf("NO\n");
	}
}
