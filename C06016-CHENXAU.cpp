#include<stdio.h>
#include<string.h>


int main()
{
    char s1[100];
    char s2[100];
    int p;
    gets(s1);
    gets(s2);
    scanf("%d",&p);
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    for(int i = 0; i < p-1; i++)
    {
        printf("%c",s1[i]);
    }
    printf("%s",s2);
    for(int i = p-1; i < len1; i++)
    {
        printf("%c",s1[i]);
    }
}