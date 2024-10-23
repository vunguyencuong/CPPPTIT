#include<stdio.h>
 
int main() {
    int n,m=1;
 
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
       if(i%2!=0)
       {
           for(int j=1;j<=i;j++)
           {
               printf("%d ",m);
               m++;
           }
       }
       if(i%2==0)
       {
           m+=i-1;
           for(int j=i;j>=1;j--)
           {
               printf("%d ",m);
               m--;
           }
           m+=i+1;
       }
        printf("\n");
    }
        

}