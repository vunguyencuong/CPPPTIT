#include<stdio.h>
#include<math.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,p;
        scanf("%d%d",&n,&p);
        int count = 0;
        for(int i = p; i <= n; i++)
        {
            int m = i;
            while(m % p == 0)
            {
                m /= p;
                count++;
            }
        }
        printf("%d\n",count);
    }
}