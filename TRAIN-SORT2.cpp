#include<bits/stdc++.h>
using namespace std;

int cmp(string a, string b)
{
	int min = a.length() <= b.length() ? a.length() : b.length();
	for(int i = 0; i < min; i++)
	{
		if(a[i] > b[i]) return 1;
		if(a[i] < b[i]) return -1;
	}
	if(a.length() > b.length()) return 1;
	if(a.length() < b.length()) return -1;
	return 0;
}

int divide(string a[], int l, int r)
{
	string pivot = a[r];
	int i = l; 
	int j = r-1;
	while(true)
	{
		while(i <= j && cmp(a[i],pivot) == -1) i++;
		while(i <= j && cmp(a[j],pivot) == 1 ) j--;
		if(i >= j) break;
		swap(a[i],a[j]);
		i++,j--; 
	}
	swap(a[i],a[r]);
	return i;
}

void quicksort(string a[], int l, int r)
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
	string a[100];
	for(int i = 0; i < n; i++)
	{
		cin>> a[i];
	}
	quicksort(a,0,n-1);
	for(int i = n-1; i>=0; i--)
	{
		cout<< a[i];
	}
}
