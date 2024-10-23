#include<stdio.h>
#include<math.h>
typedef long long ll;

int main()
{
    int t;
    scanf("%d",&t);
    for(int i = 1; i<= t; i++)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        int a[100][100];
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        int b[100][100];
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                b[i][j] = a[j][i];
            }
        }
        int c[100][100] = {0};
        for(int i = 0; i < n ;i++)
        {
            for(int j = 0; j < n; j++)
            {
                for(int k = 0; k < m; k++)
                {
                    c[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        printf("Test %d:\n",i);
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
        //printf("\n");
    }
}