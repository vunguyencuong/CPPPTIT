#include<stdio.h>
#include<string.h>

int main()
{
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		char s[250];
		gets(s);
		int count = 0;
		int len = strlen(s);
		for(int i = 0; i < len-2; i++)
		{
			if(s[i] == ' ' && s[i+1] != ' ') count++;
		}
		printf("%d\n",count+1);
	}
}
