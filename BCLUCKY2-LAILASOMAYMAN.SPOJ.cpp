#include<bits/stdc++.h>
using namespace std;

int Lucky(int n)
{
	if(n == 0) return 0;
	vector<int> a;
	while(n > 0)
	{
		a.push_back(n%10);
		n /= 10;
	}
	for(int i = 0; i < a.size(); i++)
	{
		if(a[i] != 4 && a[i] != 7)
		{
			return 0;
			break;
		}	
	}
	return 1;
}
int Sum(int n)
{
	int sum = 0;
	while(n > 0)
	{
		sum += n%10;
		n /= 10;
	}
	return sum;
}
int main()
{
	int n ;
	cin>> n;
	int check = 0;
	for(int i = 4; i <= 1000000;i++)
	{
		if(Lucky(i) == 1)
		{
			if(Sum(i) == n)
			{
				check = 1;
				cout<< i << endl;
				break;
			}
		}
	}
	if(check == 0 )cout<< -1;
	return 0;
}
