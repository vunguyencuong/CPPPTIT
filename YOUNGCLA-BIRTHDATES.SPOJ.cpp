#include<bits/stdc++.h>
using namespace std;

struct inFors
{
	string name;
	int date;
	int month;
	int year;
};

bool cmp(inFors a, inFors b)
{
	if(a.year == b.year)
	{
		if(a.month == b.month)
		{
			return a.date < b.date;
		}
		else return a.month < b.month;
	}
	else return a.year < b.year;
					
}

int main()
{
	int n;
	cin>> n;
	cin.ignore();
	vector<inFors> a(n);
	for(int i = 0; i < n;i++)
	{
		cin>> a[i].name;
		cin>> a[i].date >> a[i].month >> a[i].year;
	} 
	sort(a.begin(),a.end(),cmp);
	cout<< a[n-1].name << endl << a[0].name;	
	
	
	return 0;
}
