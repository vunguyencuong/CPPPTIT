#include<stdio.h>
#include<math.h>

void solve(int a[], int n)
{
    int max = 0;
    int mem[n];
    int pos = 0;
    for(int i = 0; i < n; i++)
    {
        int begin = i;
        int count = 0;
        for(;i < n-1 && a[i+1] > a[i]; i++)
        {
            count++;
        }
        if(count == max)
        {
            mem[pos++] = begin;
        }
        else if(count > max)
        {
            max = count;
            for(int j = 0; j < pos;j++)
            {
                mem[j] = -1;
            }
            mem[pos++] = begin;
        }
    }
    printf("%d\n",max+1);
    for(int i = 0; i < pos; i++)
    {
        if(mem[i] != -1)
        {
            for(int j = mem[i]; j <= mem[i] + max; j++)
            {
                printf("%d ",a[j]);
            }
            printf("\n");
        }
    }

}


int main()
{
    int t;
    scanf("%d",&t);
    for(int k = 1; k <= t; k++)
    {
        int n;
        scanf("%d",&n);
        int a[10000];
        for(int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Test %d:\n",k);
        solve(a,n);

    }
}