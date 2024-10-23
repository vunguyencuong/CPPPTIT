#include<stdio.h>
#include<string.h>



int main()
{
    char s[1000];
    scanf("%s",s);
    int tanso[150]={0};
    for(int i = 0; i < strlen(s); i++)
    {
        tanso[(int)s[i]]++;
    }
    int count = 0;
    for(int i = 97; i <= 122; i++)
    {
        //if(tanso[i] == 0) count++;
        printf("%d ",tanso[i]);
    }
    //printf("%d",count);

}