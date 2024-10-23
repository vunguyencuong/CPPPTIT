#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);

string solve(string a, string b)
{
	while(a.length() < b.length()) a = '0'+a;
	while(a.length() > b.length()) b = '0'+b;
	if(a < b) swap(a,b);
	if(a == b) return "0";
	int nho = 0;
	string ans = "";
	for(int i = a.length()-1; i >= 0; i--)
	{
		int hieu = (int)(a[i]-'0') - (int)(b[i]-'0') - nho;
		if(hieu < 0)
		{
			hieu += 10;
			nho = 1;
		}
		else nho = 0;
		ans = (char)(hieu + '0') + ans;
	}
	return ans;
}

int main()
{
	faster();
	int t;
	cin>> t;
	cin.ignore();
	while(t--)
	{
		string a,b;
		cin>> a >> b;
		cout<< solve(a,b) << endl;
	}
}


































