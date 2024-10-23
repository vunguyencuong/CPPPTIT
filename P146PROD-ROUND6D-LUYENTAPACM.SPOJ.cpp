#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>> n;
	int count = 0;
	for(int i = 0; i < n ;i++)
	{
		int m;
		int countS = 0;
		for(int i = 0; i < 3 ;i++)
		{
			cin>> m;
			if(m == 1) countS ++;
		}
		if(countS >= 2) count++;
	}
	cout<< count;
}
