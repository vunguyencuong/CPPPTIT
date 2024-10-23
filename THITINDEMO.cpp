#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[100];
    int tanso[100000] = {0};
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        tanso[a[i]]++;
    }
    for(int i = 0; i < n; i++)
    {
        if(tanso[a[i]] != 0)
        {
            printf("%d ",a[i]);
            tanso[a[i]] = 0;
        }
    }
    
}