#include<bits/stdc++.h>
using namespace std;

int luckyNumber(int n)
{
	vector<int> a;
	while(n > 0)
	{
		a.push_back(n%10);
		n /= 10;
	}
	for(int i = 0; i < a.size();i++)
	{
		if(a[i] != 4 && a[i] != 7)
		{
			return 0;
			break;
		}
	}
	return 1;
}


int main()
{
	int N;
	cin>> N;
	int check = 0;
	vector<int>b;
	for(int i = 1; i <= 1000; i++)
	{
		if(luckyNumber(i) == 1) b.push_back(i);
	}
	for(int i = 0; i < b.size();i++)
	{
		if(N % b[i] == 0)
		{
			check = 1;
			break;
		}
	}
	if(check == 1) cout<< "YES";
	else cout<< "NO";
}
