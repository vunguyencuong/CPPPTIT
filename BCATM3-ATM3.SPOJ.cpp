#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		ll money;
		cin>> money;
		ll a[10]={500,200,100,50,20,10,5,2,1};
		int count = 0;
		for(int i = 0; i < 9 ;i++)
		{
			int m = money/a[i];
			count += m;
			money -= a[i]*m;
			if(money == 0) break;
		}
		cout<< count << endl;
	}
	
}
