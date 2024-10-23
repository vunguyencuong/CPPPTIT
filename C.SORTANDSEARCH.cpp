#include<bits/stdc++.h>
using namespace std;

int divide(int b[], int l, int r)
{
	int pivot = b[r];
	int i = l;
	int j = r-1;
	while(true)
	{
		while(b[i] < pivot && i <= j ) i++;
		while(b[j] > pivot && i <= j ) j--;
		if(i >= j) break;
		swap(b[i],b[j]);
		i++, j--;
	}
	swap(b[i],b[r]);
	return i;
}
void quicksort(int b[], int l, int r)
{
	if(l < r)
	{
		int pivot = divide(b,l,r);
		quicksort(b,l,pivot-1);
		quicksort(b,pivot+1,r);
	}
}


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin>> t;
	while(t--)
	{
		string a;
		string s;
		cin>> a;
		cin>> s;
		int len1 = a.length();
		int len2 = s.length();
		int b[100000]={};
		for(int i = 0; i < len2; i++)
		{
			b[i] = s[i];
		}
		quicksort(b,0,len2-1);
	/*	for(int i = 0; i < len2; i++)
		{
			cout<< b[i];
		}
		cout<< endl;
		*/
		int j = len2-1;
		for(int i = 0; i < len1; i++)
		{
			if(a[i] < b[j] && j >= 0)
			{
				a[i] = b[j];
				j--;
			}
		}
		cout<< a;
		cout<< endl;
		
	}
}
