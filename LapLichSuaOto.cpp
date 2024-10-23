#include<bits/stdc++.h>
using namespace std;

struct Car
{
	double money;
	double date;
	int index;
};

bool cmp(Car x, Car y)
{
	if(x.money/x.date == y.money/y.date) return x.money<y.money;
	return x.money/x.date > y.money/y.date; 
}

void print(vector<Car>v)
{
	for(int i = 0 ; i< v.size(); i++)
	{
		cout<<v[i].index << " ";
	}
}

int main()
{
	int n ;
	cin>> n;
	vector<Car> v;
	v.resize(n);
	for(int i = 0; i < n ;i++)
	{
		cin>> v[i].money;
		v[i].index = i+1;
	}
	for(int i = 0 ; i < n; i++)
	{
		cin>> v[i].date;
	}
	sort(v.begin(),v.end(),cmp);
	long long moneys = 0;
	long long time = 0;
	for(int i = 0; i < n; i++)
	{
		time += v[i].date;
		moneys +=v[i].money*time;
	}
	cout<< moneys << endl;
	print(v);
	
	return 0;
}
