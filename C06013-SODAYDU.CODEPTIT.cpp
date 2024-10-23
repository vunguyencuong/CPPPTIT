#include<stdio.h>
#include<math.h>
#include<string.h>


int main()
{
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		char s[1000];
		gets(s);
		int len = strlen(s);
		int check = 1;
		int tanso[15]={0};
		for(int i = 0; i < len; i++)
		{
			if(s[i] >= 'a' && s[i] <= 'z'|| s[0] == '0')
			{
				check = 0;
				break;
			}
		}
		if(check == 0) printf("INVALID\n");
		else
		{
			int test = 1;
			for(int i = 0; i < len; i++)
			{
				tanso[s[i]-'0']++;
			}
			for(int i = 0; i < 10; i++)
			{
				if(tanso[i] == 0) test = 0;
			}
			if(test == 1) printf("YES\n");
			else printf("NO\n");
		}
	}
	
}
