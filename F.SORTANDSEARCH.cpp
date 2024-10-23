#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n1,n2,n3;
		scanf("%d%d%d",&n1,&n2,&n3);
		ll a[n1];
		ll b[n2];
		ll c[n3];
		for(int i = 0; i < n1; i++)
		{
			scanf("%lld",&a[i]);
		}
		for(int i = 0; i < n2; i++)
		{
			scanf("%lld",&b[i]);
		}
		for(int i = 0; i < n3; i++)
		{
			scanf("%lld",&c[i]);
		}
		int i = 0, j = 0, k = 0;
		int check = 0;
		while(i < n1 && j < n2 && k < n3)
		{
			if(a[i] == b[j] && b[j] == c[k])
			{
				check = 1;
				printf("%lld ",a[i]);
				i++,j++,k++;
			}
			else if(a[i] < b[j])
			{
				i++;
			}
			else if(b[j] < c[k])
			{
				j++;
			}
			else k++;
		}
		if(check == 0) cout<< "-1";
		printf("\n");
	}
}
