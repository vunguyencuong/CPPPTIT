#include<stdio.h>
 
int main() 
{
    int n;
 
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        int k=i,c=n-1;
        for(int j=i;j>=1;j--)
        {
            printf("%d ",k);
            k+=c;
            c--;
        }
        printf("\n");
    }
        

}