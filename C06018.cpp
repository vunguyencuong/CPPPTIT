#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct data
{
    char word[1000];
    int tanso;
};

int main()
{
    int t;
    scanf("%d\n",&t);
    while(t--)
    {
        char s1[1000];
        char s2[1000];
        gets(s1);
        gets(s2);
        struct data A[1000];
        int i;
        char* token;
        int id1 = 0;
        // tach xau 1
        token = strtok(s1," ");
        while(token != NULL)
        {
            int check = 0; // kiem tra trong struct xem da co token chua
            for(int i = 0; i < id1; i++)
            {
                if(strcmp(token,A[i].word) == 0)
                {
                    check = 1;
                    A[i].tanso++;
                    break;
                }
            }
            if(check == 0)
            {
                strcpy(A[id1].word,token);
                A[id1].tanso = 1;
                id1++;

            }
            token = strtok(NULL," ");
        }
       /* for(int i = 0; i < id1; i++)
        {
            printf("%s %d\n",A[i].word,A[i].tanso);
        }
        */
        // tach xau 2
        token = strtok(s2," ");
       // char s[200][200];
       // int id2 = 0;
        while(token != NULL)
        {
            for(int i = 0; i < id1; i++)
            {
                if(strcmp(A[i].word,token) == 0)
                {
                    A[i].tanso = 0;
                    break;
                }
            }
            token = strtok(NULL," ");
        }
        char x[200][200];
        int id = 0;
        for(int i = 0; i < id1; i++)
        {
            if(A[i].tanso != 0)
            {
                strcpy(x[id++],A[i].word);
            }
            
          // printf("%s %d\n",A[i].word,A[i].tanso);
        }
        for(int i =0 ;i<id-1;i++)
        {
            for(int j=i+1;j<id;j++)
            {
                if(strcmp(x[i],x[j])>0)
                {
                    char s[200];
                    strcpy(s,x[i]);
                    strcpy(x[i],x[j]);
                    strcpy(x[j],s);
                }
            }
        }
        
        for(int i = 0; i < id; i++)
        {
            printf("%s ",x[i]);
        }
        printf("\n");
        
    }
}