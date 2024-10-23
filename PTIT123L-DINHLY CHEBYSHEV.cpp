#include<bits/stdc++.h>
using namespace std;

vector<bool> check(1e7,true);
void Snt()
{
	for(int i = 2; i*i <= 1e7; i++)
	{
		if(check[i] == true)
		{
			for(int j = i*i; j <= ; j+=i)
			{
				check[j] = false;
			}
		}
	}
}

int main()
{
	while(true)
	{
		Snt();
		int n;
		cin>> n;
		if(n == 0) return 0;
		int count1 = 0;
		for(int i = n+1; i <= 2*n; i++)
		{
			if(check[i] == true ) count1++;
		}
		cout<< count1 << endl;
	}
	
}


