#include<stdio.h>
#include<math.h>
typedef long long ll;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[100005];
        for(int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }
        ll sum = 0, res = 0;
        for(int i = 0; i< n; i++)
        {
            sum += a[i];
            if(res < sum) res = sum;
            if(sum < 0) sum = 0;
        }
        printf("%lld\n",res);
    }
}