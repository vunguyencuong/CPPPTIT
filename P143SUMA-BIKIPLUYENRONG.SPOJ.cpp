#include<bits/stdc++.h>
using namespace std;

struct Power
{
	int power;
	int bonus;
};
bool cmp(Power a , Power b)
{
	if(a.power < b.power) return true;
	else return false;
}
int main()
{
	int s,n;
	cin>> s >> n;
	vector<Power> a(n);
	for(int i= 0; i < n;i++)
	{
		cin>> a[i].power >> a[i].bonus;
		cin.ignore();
	}
	int check = 1;
	sort(a.begin(),a.end(),cmp);
	for(int i = 0; i < n;i++)
	{
		if(s > a[i].power)
		{
			s += a[i].bonus;
		}
		else
		{
			check = 0;
			break;
		}
	}
	if(check == 1) cout<< "YES" ;
	else cout<< "NO";
	
	
	return 0;
}
