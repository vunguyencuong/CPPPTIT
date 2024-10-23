#include<bits/stdc++.h>
using namespace std;

struct Cow
{
	int  m;
	double index;
};

bool cmp(Cow a, Cow b)
{
	if(a.index == b.index ) return a.m > b.m;
	else return a.index > b.index;
}

int main()
{
	int C,N;
	int M=0;
	cin>> C >> N;
	vector<Cow> a(N);
	for(int i = 0; i < N; i++)
	{
		cin>> a[i].m;
		a[i].index = (double)a[i].m/i;
	}
	sort(a.begin(),a.end(),cmp);
	for(int i = 0; i < N; i++)
	{
		M += a[i].m;
		if(M >= C)
		{
			M = M - a[i].m;
			break;
		}
	}
	cout<< M << endl;
}
