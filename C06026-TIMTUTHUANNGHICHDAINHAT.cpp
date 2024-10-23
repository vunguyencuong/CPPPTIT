#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
struct data
{
    char word[1000];
    int tanso;
};

int Search(char s[])
{
    int right = strlen(s)-1;
    int left = 0;
    while(left <= right)
    {
        if(s[left] != s[right]) return false;
        left++;
        right--;
    }
    return true;
}
int id = 0;
struct data A[1005];
int max = 0;
int main()
{
    char text[1005];
    while(scanf("%s",text)!=-1)
    {
       if(Search(text))
       {
            int check = 0;
            for(int i = 0; i  < id ; i++)
            {
                if(strcmp(text,A[i].word) == 0)
                {
                    A[i].tanso++;
                    check = 1;
                    break;
                }
            }
            if(check == 0)
            {
                strcpy(A[id].word,text);
                A[id].tanso = 1;
                id++;
            }
       }
    }  
    for(int i = 0; i < id; i++)
    {
        if(max < strlen(A[i].word)) max  = strlen(A[i].word);
    }
    
    for(int i = 0; i < id; i++)
    {
        if(strlen(A[i].word) == max)
        {
            printf("%s %d\n",A[i].word,A[i].tanso);
        }
    }
}