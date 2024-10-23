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

void Fix1(char s[])
{
    int len = strlen(s);
    for(int i = 0 ; i < len; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
    }
}

int main()
{
    int n;
    scanf("%d\n",&n);
    while(n--)
    {
        char s[100];
        fgets(s,100,stdin);
        Xoa_space(s);
        Fix1(s);
        s[0] -= 32;
        for(int i = 0 ; i < strlen(s); i++)
        {
            if(s[i] == ' ' && s[i+1] != ' ')
            { 
                s[i+1] -= 32;
            }
        }
        printf("%s\n",s);
        printf("%d\n",strlen(s));
    }
}