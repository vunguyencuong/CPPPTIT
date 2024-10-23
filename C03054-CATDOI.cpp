#include<stdio.h>
#include<math.h>
#include<string.h>
typedef long long ll;


int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char s[100];
		scanf("%s",s);
		int len = strlen(s);
		int check = 1;
		for(int i = 0; i < len;i++)
		{
			if(s[i] == '0'|| s[i] == '8' || s[i] == '9')
			{
				s[i] = '0';
			}
			else if(s[i] == '1') s[i] = '1';
			else
			{
				check = 0;
				break;				
			}
		}
		int count = 0;
		for(int i = 0; i < len; i++)
		{
			if(s[i] == '0') count++;
		}
	//	printf("%d",count);
		if(count == len || check == 0) printf("INVALID\n");
		else
		{
			for(int i = 0; i < len; i++)
			{
				if(s[i] == '1')
				{
					for(int j = i; j < len; j++)
					{
						printf("%c",s[j]);
					}
					printf("\n");
					break;
				}
			}
		}
		
	}
}
