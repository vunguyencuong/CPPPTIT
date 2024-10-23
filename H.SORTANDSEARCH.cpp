#include<bits/stdc++.h>
using namespace std;
int a[1000000]={};
int main()
{
	int n,x;
	scanf("%d%d",&n,&x);
	int check = 0;
	for(int i = 1; i <= n;i++)
	{
		scanf("%d",&a[i]);
	}
	int l = 1;
	int r = n;
	while(l <= r)
	{
		int pivot = (l+r)/2;
		if(a[pivot] == x )
		{
			check = 1;
			break;
		}
		else if(a[pivot] > x)
		{
			r = pivot-1;
		}
		else if(a[pivot] < x)
		{
			l = pivot + 1;
		}
	}
	if(check == 1) cout<< "YES" << endl;
	else cout<< "NO" << endl;
}
