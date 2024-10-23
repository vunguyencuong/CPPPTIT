#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define space " \n"
int main()
{
	char s[1000]={};
	fgets(s, 100, stdin);
    int n = 0;
    char x[100][100]={}; 
    char *tmp = strtok(s, space);
    while (tmp!= NULL)
    {
        bool check = 0;
        for(int i = 0; i < n; i++)
        {
            if (strcmp(x[i], tmp) == 0) 
            {
                check = 1;
                break;
            }
        }
        if(check == 0)
        {
            strcpy(x[n], tmp);
            n++;
        }
        tmp = strtok(NULL, space);
    }

    for(int i =0; i < n; i++)
    {
        printf("%s ", x[i]);
    }
	return 0;
}