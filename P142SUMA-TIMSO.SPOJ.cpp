#include<bits/stdc++.h>
using namespace std;
vector<int> a;
void SoTG(long long n)
{

	for(int i = 1; i <= n ;i++)
	{
		long long x = i*(i+1)/2;
		a.push_back(x);
	}
	
}

int main()
{
	int n;
	cin>> n;
	SoTG(n);
	int check = 0;
	for(int i = 0; i < a.size(); i++)
	{
		int m = n - a[i];
		for(int i = 0; i < a.size(); i++)
		{
			if(m == a[i])
			{
				check = 1;
				break;
			}
		}
	}
	if(check == 1) cout << "YES";
	else cout<< "NO";
	
	
	
	return 0;
}
