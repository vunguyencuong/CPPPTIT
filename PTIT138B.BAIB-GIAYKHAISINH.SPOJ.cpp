#include<bits/stdc++.h>
using namespace std;

struct inFo
{
	string name1;
	string name2;
	int age1;
	int age2;
	int x;
} typedef data;
bool cmp(data a, data b)
{
	if(a.age2 < b.age2) return 0;
	else if(a.age2 == b.age2)
	{
		if(a.x > b.x) return 0;
	}
}
int n;
data a[105];
void Dequy(string name, int kc)
{
	for(int i = 0; i< n;i++)
	{
		if(name == a[i].name1)
		{
			if(name == "Ted")
			{
				a[i].age2 = 100 - a[i].age1;
				kc = 100 - a[i].age1;
				Dequy(a[i].name2,kc);
			}
			else
			{
				a[i].age2 = kc-a[i].age1;
				Dequy(a[i].name2,kc-a[i].age2);
			}
		}
	}
	
}

int main()
{
	int t;
	cin>> t;
	int k = 1;
	while(t--)
	{
		cin>> n;
		cin.ignore();
		int index = 1;
		for(int i = 0; i < n ;i++)
		{
			cin>> a[i].name1 >> a[i].name2 >> a[i].age1;
			a[i].x = index;
			index++;
		} 
		Dequy("Ted",0);
		sort(a,a+n,cmp);
		cout<< "DATESET " << k << endl;		
		k++;
		for(int i = 0; i < n ;i++)
		{
			cout<< a[i].name2 << " " << a[i].age2 << endl;
		}	
		
	}
}
