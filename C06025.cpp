#include<stdio.h>
#include<string.h>

void Swapnum(char** a, char** b)
{
    char* temp = *a;
    *a = *b;
    *b = temp;
}

char* Solve(char* s1, char* s2)
{
    bool sign = false, remember = false;
    if(strlen(s1) < strlen(s2))
    {
        sign = true;
        Swapnum(&s1,&s2);
    }
    else if(strlen(s1) == strlen(s2))
    {
        for(int i = strlen(s1))
    }
}

int main()
{
    int t;
    scanf("%d\n",&t);
    while(t--)
    {
        char s1[1005];
        char s2[1005];
        gets(s1);
        gets(s2);

    }
}