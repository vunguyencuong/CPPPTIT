#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	
		char s[100];
		scanf("%s",s);
		int len = strlen(s);
		for(int i = 0; i < len-2;i++)
		{
			if(s[i] == '0' && s[i+1] == '8' && s[i+2] == '4')
			{
				s[i] = 'a';
				s[i+1] = 'a';
				s[i+2] = 'a';
				break;
			}
		}
		for(int i = 0; i < len; i++)
		{
			if(s[i] != 'a') printf("%c",s[i]);
		}
		printf("\n");
	}
}
