#include<stdio.h>
#include<string.h>
#include<stdbool.h>

struct data
{
    char word[100];
    int tanso;
    int len;
};

char text[1005];
int id = 0;
struct data A[1005];
int main()
{
    while(scanf("%s",text)!= -1)
    {
        int check = 0;
        for(int i = 0; i < id; i++)
        {
            if(strcmp(text,A[i].word) == 0)
            {
                A[i].tanso++;
                check = 1;
                break;
            }
        }
        if(check == 0 )
        {
            strcpy(A[id].word,text);
            A[id].tanso = 1;
            A[id].len = strlen(text);
            id++;
        }
    }
    int max = 0;
    for(int i = 0; i < id; i++)
    {
        if(max < A[i].len) max = A[i].len;
    }
    for(int i = 0; i < id; i++)
    {
        if(A[i].len == max)
        {
            printf("%s %d %d\n",A[i].word,A[i].len,A[i].tanso);
        }
    }
}