#include<stdio.h>
#include<string.h>

int main()
{
    char s1[100];
    gets(s1);
    char delim[2] = " ";
    char *token;
    token = strtok(s1,delim);
    while(token != NULL)
    {
        printf("%s\n",token);
        token = strtok(NULL,delim);
    }
}
