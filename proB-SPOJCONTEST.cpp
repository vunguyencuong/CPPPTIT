#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n,m;
		cin>> n >> m;
		vector<int> a(n);
		vector<int> b(m);
		for(int i =0; i < n;i++)
		{
			cin>> a[i];
			
		}
		for(int j = 0; j < m;j++)
		{
			cin>> b[j];
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		int k = 0, p = 0;
		while(k < n && p < m)
		{
			if(a[k] < b[p])
			{
				cout<< a[k] << " ";
				k++;
			}
			else if(a[k] > b[p])
			{
				cout<< b[p] << " ";
				p++;
			}
			else
			{
				cout<< b[p] << " ";
				p++;
				k++;
			}
		}
		while(k < n)
		{
			cout<< a[k] << " ";
			k++; 
		}
		while(p < m)
		{
			cout<< b[p] << " ";
			p++;
		} 

		cout<< endl;
		int i = 0, j = 0;
		while(i < n && j < m)
		{
			if(a[i] < b[j])
			{
				i++;
			}
			else if(a[i] > b[j])
			{
				j++;
			}
			else
			{
				cout << b[j]<< " ";
				i++;
				j++;
			}
		}
		cout<< endl;
	}
}
