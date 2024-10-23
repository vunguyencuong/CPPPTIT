#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    gets(s);
    char s2[100];
    char s3[100] = "@ptit.edu.vn";
    int len = strlen(s);
    for(int i = 0; i < len; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
    }
    int pos = 0;
    for(int i = len-1; i >= 0; i--)
    {
        if(s[i] ==' ')
        {
            pos = i+1;
            break;
        }
    }
    int a[100];
    int nums = 0;
    for(int i = 0; i < pos-1; i++)
    {
        if(s[i] == ' ' && s[i+1] != ' ')
        {
            a[nums++] = i;
        }
    }
    for(int i = 0; i < nums; i++)
    {
        s2[i] = s[a[i]+1];
    }
    if(s[0] != ' ') printf("%c",s[0]);
    printf("%s",s2);
    for(int i = pos; i < len; i++)
    {
        printf("%c",s[i]);
    }
    printf("%s",s3);
}