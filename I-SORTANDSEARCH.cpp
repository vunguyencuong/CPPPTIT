#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> v;
void tach(ll n)
{
	while(n)
	{
		v.push_back(n%10);
		n/=10;
	}
}

/*int divide(vector<int> v,int l, int r)
{
	int pivot = v[r];
	int i = l;
	int j = r-1;
	while(true)
	{
		while(i <= j && v[i] < pivot) i++;
		while(i <= j && v[j] > pivot) j--;
		if(i >= j) break;
		swap(v[i],v[j]);
		i++,j--;
	}
	swap(v[i],v[r]);
	return i;
}

void quicksort(vector<int> v , int l, int r)
{
	if(l < r)
	{
		int pivot = divide(v,l,r);
		quicksort(v,l,pivot-1);
		quicksort(v,pivot+1,r);
	}
}
*/
int main()
{
	int n;
	cin>> n;
	ll a[1000]={};
	for(int i = 0; i < n ;i++)
	{
		cin>> a[i];
	}
	for(int i = 0; i < n; i++)
	{
		tach(a[i]);
	}
	ll len = v.size();
	//quicksort(v,0,len-1);
	sort(v.begin(),v.end());
	for(int i = 0; i < v.size();i++)
	{
		cout<< v[i] << " ";
	}
}
