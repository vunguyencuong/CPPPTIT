#include<stdio.h>
#include<math.h>

void solve(int a[], int n)
{
    int min_idx;
    for(int i = 0; i < n-1; i++)
    {
        min_idx = i;
        for(int j = i+1; j < n; j++)
        {
            if(a[j] < a[min_idx])
            {
                min_idx = j;
            }
        }
        int tmp = a[min_idx];
        a[min_idx] = a[i];
        a[i] = tmp;
        for(int i = 0; i < n; i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    }
}


int main()
{
    int n;
    scanf("%d",&n);
    int a[1000];
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    solve(a,n);

}