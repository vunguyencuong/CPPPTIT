#include<stdio.h>
#include<string.h>

int check1(char s[])
{
	int len = strlen(s);
	int a = s[0] - '0';
	int b = s[len-1] - '0';
	if(a == 2*b || b == 2*a) return 1;
	else return 0;
}

int check2(char s[])
{
	int l = 1, r = strlen(s) -2;
	while(l <= r)
	{
		if(s[l] != s[r]) return 0;
		l++,r--;
	}
	return 1;
}

int main()
{
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		char s[100];
		scanf("%s",s);
		//printf("%d %d",check1(s),check2(s));
		if(check1(s) == 1 && check2(s) == 1)
			printf("YES\n");
		else printf("NO\n");
	}
}
