#include<stdio.h>
#include<string.h>


int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		char s[100];
		scanf("%s",s);
		int left = 0;
		int right = strlen(s) - 1;
		int count = 0;
		while(left < right)
		{
			if(s[left] != s[right]) count++;
			left++;
			right--;
		}
		if(count == 1) printf("YES\n");
        else if(count == 0)
        {
            if(strlen(s) % 2 == 0) printf("NO\n");
            else printf("YES\n");
        }
        else printf("NO\n");

	}
}