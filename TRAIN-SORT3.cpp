#include<bits/stdc++.h>
using namespace std;

int divide(string a[], int l,int r)
{
	string pivot = a[r];
	int i = l;
	int j = r-1;
	while(true)
	{
		while(i <= j && a[i] > pivot) i++;
		while(i <= j && a[j] < pivot) j--;
		if(i >= j) break;
		swap(a[i],a[j]);
		i++,j--;
	}
	swap(a[i],a[r]);
	return i;
}

void quicksort(string a[], int l ,int r)
{
	if(l < r)
	{
		int pivot = divide(a,l,r);
		quicksort(a,l,pivot-1);
		quicksort(a,pivot+1,r);
	}
}

int main()
{
	int n;
	cin>> n;
	vector<string> a[1000];
	for(int i = 0; i < n;i++)
	{
		string x;
		cin>> x;
		a[i].push_back(x);
	}
	for(int i = 0; i < n;i++)
	{
		int len = a[i].size();
		quicksort(a[i],0,len-1);
	}
	for(int i = 0; i < n ;i++)
	{
		cout<< a[i] << " ";
	}
}
