#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int dem=n-1;
    for(int i=1;i<=n;i++)
    {
        char d='A'+i-1;
        for(int j=0;j<i;j++)
        {
            printf("%c ",d);
            d=d+dem-j;
        }
        printf("\n");
    }
}