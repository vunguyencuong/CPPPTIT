#include<stdio.h>
#include<math.h>


int main()
{
    int t;
    scanf("%d",&t);
    for(int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d",&n);
        int a[100][100];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j< n ;j++)
            {
                if(j <= i)
                {
                    a[i][j] = j+1;
                }
                else a[i][j] = 0;
            }
        }
        printf("Test %d:\n",i);
        int b[100][100];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                b[i][j] = a[j][i];
            }
        }
        int c[100][100] = {0};
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                for(int k = 0; k < n; k++)
                {
                    c[i][j] += a[i][k]*b[k][j];
                }
            }
        }
         for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
}