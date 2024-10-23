#include<bits/stdc++.h>
using namespace std;

long long n_Lucky(long long n)
{
	int count = 0;
	while(n > 0)
	{
		if(n % 10 == 4 || n % 10 == 7) count++;
		n /= 10;
	}
	return count;
}

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
		
	//	cout<< a[i] << " ";
	}
//	cout<< endl;
	return 1;
}

int main()
{
	long long n;
	cin>> n;
	int m = n_Lucky(n);
	//cout<< m << endl;
	//Lucky(m);
	if(Lucky(m) == 1) cout<<"YES"<<endl;
	else if(Lucky(m) == 0) cout<<"NO"<<endl;
}

