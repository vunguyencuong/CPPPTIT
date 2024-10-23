#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

typedef long long ll;

void solve()
{
    int n;
    scanf("%d", &n);
    ll a[n];
    for (int i = 0; i < n; i++)
        scanf("%lld", &a[i]);
    for (int i = 0; i < n - 2; i++)
        for (int j = i + 1; j < n - 1; j++)
        {
            ll sum = (a[i] * a[i]) + (a[j] * a[j]);
            if (sqrt(sum) == (ll)sqrt(sum))
            {
                sum = sqrt(sum);
                for (int k = j + 1; k < n; k++)
                    if (sum == a[k])
                    {
                        printf("YES\n");
                        return;
                    }
            }
        }
    printf("NO\n");
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }
}