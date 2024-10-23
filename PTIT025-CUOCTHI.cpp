#include<stdio.h>
#include<math.h>
#include<string.h>
struct data
{
    char name[105];
    int math;
    int phys;
    int code;
    int sum;
};

int main()
{
    int n;
    scanf("%d\n",&n);
    struct data A[105];
    for(int i = 0; i < n; i++)
    {
        fgets(A[i].name,105,stdin);
    }
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&A[i].math);
    }
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&A[i].phys);
    }
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&A[i].code);
    }
    int max = 0;
    for(int i = 0; i < n; i++)
    {
        A[i].sum = A[i].math+A[i].phys+A[i].code;
        if(A[i].sum > max) max = A[i].sum;
    }
    for(int i = 0; i < n; i++)
    {
        if(A[i].sum == max)
        {
            for(int j = 0; j < strlen(A[i].name)-1; j++)
            {
                printf("%c",A[i].name[j]);
            }
            printf(" %d %d %d\n",A[i].math,A[i].phys,A[i].code);
        }
    }


}