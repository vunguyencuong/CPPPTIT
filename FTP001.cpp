#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)
    {
        int m = 1;
        for(int j = 1; j <= n; j++)
        {
            if(j <= i) printf("0 ");
            else
            {
                printf("%d ",m);
                m++;
            }
        }
        printf("\n");
    }
}