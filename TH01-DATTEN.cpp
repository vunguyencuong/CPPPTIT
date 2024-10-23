#include<bits/stdc++.h>
using namespace std;

int n,k;
int m;
set<string> init;
vector<string> a;
vector<string> ans;
int id[35];

void save()
{
    string res = "";
    for(int i = 1; i <= k; i++)
    {
        res += a[id[i]-1] + " ";
    }
    ans.push_back(res);
}

void Try(int i)
{
    for(int j = id[i-1] + 1; j <= m-k+i; j++)
    {
        id[i] = j;
        if(i == k) save();
        else Try(i+1);
    }
}

int main()
{
    cin>> n >> k;
    string s;
    for(int i = 1; i <= n; i++)
    {
        cin>> s;
        init.insert(s);
    }
    for(string i : init) a.push_back(i);
    m = a.size();
    Try(1);
    sort(ans.begin(),ans.end());
    for(string i : ans) cout<< i << endl;
}