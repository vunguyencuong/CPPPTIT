#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>> N;
	int min = 1000;
	for(int i = 1; i <= (N/3); i++)
	{
		int k3 = i*3;
		int k5 = N- k3;
		if(k5%5 == 0)
		{
			int Count = i+k5/5;
			if(Count < min)
			{
				min = Count;
			}
		}
		
	}
	if(min == 1000) cout<< -1;
	else cout<< min;
	
	
}
