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
		for(int i = 0; i < len; i++)
		{
			if(s[i] >= 'a' && s[i] <= 'z'|| s[0] == '0')
			{
				check = 0;
				break;
			}
		}
		int a[10]={};
		int count1 = 0;
		int count2 = 0;
		if(check == 0) printf("INVALID\n");
		else
		{
			for(int i = 0; i < len; i++)
			{
				if((s[i]-'0')%2 == 0) count1++;
				else count2++;
			}
			if((len%2 == 0 && count1 > count2) || (len%2 != 0 && count1 < count2)) printf("YES\n");
			else printf("NO\n");
		}
		
	///	printf("%d\n",len);
	}
	
}
