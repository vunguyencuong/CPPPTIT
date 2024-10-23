#include<bits/stdc++.h>
using namespace std;

int divide(int a[], int l, int r)
{
	int pivot = a[r];
	int i = l;
	int j = r-1;
	while(true)
	{
		while(a[i] > pivot && i <= j) i++;
		while(a[j] < pivot && i <= j) j--;
		if(i >= j) break;
		swap(a[i],a[j]);
		i++,j--;
	}
	swap(a[i],a[r]);
	return i;
}

void quicksort(int a[], int l, int r)
{
	if(l < r)
	{
	
		int pivot = divide(a,l,r);
		quicksort(a,l,pivot-1);
		quicksort(a,pivot+1,r);
	}
}

int a[1000000]={};
int main()
{
	int n;
	cin>> n;
	for(int i = 0; i < n;i++)
	{
		cin>> a[i];
	}
	quicksort(a,0,n-1);
/*	int max = a[n-1];
	int check = 0;
	for(int i = n-1; i>= 0; i--)
	{
		if(a[i] < max)
		{
			check = 1;
			cout<< a[i] ;
			break;
		}
	}
	if(check == 0) cout<< "NOT FOUND";
	*/
	for(int i = 0; i < n;i++)
	{
		cout<< a[i] << " ";
	}
}
