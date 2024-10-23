#include<stdio.h>
#include<string.h>
char s[10000000];
int main()
{
	int n; scanf("%d\n",&n);
	char k; scanf("%c\n",&k);
	int count = 0 ;
	gets(s);
	for(int i = 0; i < n ;i++)
	{
		if(s[i] == k || k - 32 == s[i] || k + 32 == s[i]) count++;
	}
	printf("%d",count);
}
