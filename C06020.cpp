#include<stdio.h>
#include<string.h>

void Xoa_space(char s[])
{
	int len = strlen(s);
	int i = 0;
	while(s[0] == ' ')
	{
		for(i = 0; i < len; i++)
		{
			s[i] = s[i+1];
		}
	} 
	len = strlen(s);
	for(i = len-1; i >= 0 && s[i] == ' ';i--);
	s[i+1] = '\0';
	len = strlen(s);
	for(int i = 0; i < len; i++)
	{
		while(s[i] == ' ' && s[i+1] == ' ')
		{
			for(int j = i; j < len; j++)
			{
				s[j] = s[j+1];
			}
		}
	}
}

void Fix(char s[])
{
	int len = strlen(s);
	for(int i = 0; i < len; i++)
	{
		if(s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] += 32;
		}
	}
}

int main()
{
    int t;
    scanf("%d\n",&t);
    while(t--)
    {
        char s[100];
        gets(s);
        Xoa_space(s);
        Fix(s);
        char s1[100] = "@ptit.edu.vn";
        char s2[100];
        int pos = 0;
        int len2 = 0;
        for(int i = strlen(s)-1; i >= 0; i--)
        {
            if(s[i] == ' ')
            {
                pos = i;
                break;
            }
        }
        for(int i = pos+1; i < strlen(s); i++)
        {
            s2[len2++] = s[i];
        }
        int s3[100];
        int len3 = 1;
        s3[0] = s[0];
        for(int i = 0; i < pos; i++)
        {
            if(s[i] == ' ')
            {
                s3[len3] = s[i+1];
                len3++;
            }
        }
        printf("%s",s2);
        for(int i = 0; i < len3; i++)
        {
            printf("%c",s3[i]);
        }
        printf("%s\n",s1);
        

        
    }
}