#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;

bool isNum(string x)
{
	if(x[x.size()-1] >= '0' && x[x.size()-1] <= '9') return true;
	return false;
}
void solve()
{
	string s;
	getline(cin,s);
	stringstream ss(s);
	string token;
	vector<string> vt,Str,res;
	vector<int> Num;
	while(ss >> token)
	{
		token.pop_back();
		if(isNum(token)) Num.push_back(stoi(token));
		else Str.push_back(token);
		vt.push_back(token);
	}
	sort(Str.begin(),Str.end());
	sort(Num.begin(),Num.end());
	int count1 = 0, count2 = 0;
	for(int i = 0; i < vt.size();i++)
	{
		if(isNum(vt[i]))
		{
			res.push_back(to_string(Num[count1]));
			count1++;
		}
		else
		{
			res.push_back(Str[count2]);
			count2++;
		}
	}
	for(int i = 0; i < res.size()-1;i++) cout<< res[i] << ", ";
	cout<< res[res.size()-1] << "." << endl;
}
int main()
{
	faster();
	int t;
	cin>> t;
	cin.ignore();
	while(t--)
	{
		solve();
	}
	return 0;
}




