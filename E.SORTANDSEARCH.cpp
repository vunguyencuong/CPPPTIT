#include<bits/stdc++.h>
using namespace std;

struct Data
{
	int value;
	int pos;
};

bool cmp(Data a, Data b)
{
	if(a.pos>b.pos)return true;
    if(a.pos==b.pos)return a.value < b.value;
    return false;
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
    	int n;
    	cin>> n;
    	vector<int> a(n);
    	vector<int> ts(100005,0);
    	for(int i = 0; i < n;i++)
    	{
    		cin>> a[i];
    		ts[a[i]]++;
		}
		vector<Data> d(n);
		for(int i = 0; i < n;i++)
		{
			d[i].value = a[i];
			d[i].pos = ts[a[i]];
		}
		sort(d.begin(),d.end(),cmp);
		for(int i = 0; i < n; i++)
		{
			cout<< d[i].value << " ";
		}
		cout<< endl;
    	
	}
}
