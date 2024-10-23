#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int binary(ll a[], int l, int r, ll k)
{
	while(l <= r)
	{
		int pivot = (l+r)/2;
		if(a[pivot] == k) return pivot;
		else if(a[pivot] > k) 
		{
			r = pivot -1;
		}
		else if(a[pivot] < k)
		{
			l = pivot + 1;
		}
	}
	return -1;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		ll k;
		scanf("%lld",&k);
		ll a[n+5];
		a[0] = 0;
		for(int i = 1; i <= n ;i++)
		{
			scanf("%lld",&a[i]);
		}
		for(int i = 2; i <= n; i++)
		{
			a[i] += a[i-1];
		}
		int check = 0;
		for(int i = 0; i < n;i++)
		{
			int j = binary(a,1,n,a[i]+k);
			if(j != -1)
			{
				check = 1;
				for(int p = j; p >= i ;p--)
				{
					a[p] -= a[p-1];
				}
				for(int p = i+1; p <= j; p++)
				{
					printf("%lld ",a[p]);
				}
				printf("\n");
				break;
			}
		}
		if(check == 0) printf("NOT FOUND\n");
	}
}
