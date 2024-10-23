#include<bits/stdc++.h>
using namespace std;
int n,p,s,pos;
vector<int> a,x;
vector<vector<int>> res;
vector<bool> check(1e3+5,true);
void Sang()
{
    check[0] = check[1] = false;
    for(int i = 2; i <= 1000; i++)
    {
        if(check[i])
        {
            a.push_back(i);
            for(int j = 2*i; j <= 1e3; j+= i)
            {
                check[j] = false;
            }
        }
    }
}

void Try(int pos, int k, int sum)
{
    for(int i = pos+1; i < a.size(); i++)
    {
        if(sum+a[i] == s && k == n-1)
        {
            x.push_back(a[i]);
            res.push_back(x);
            x.pop_back();
        }
        else if(k < n-1 && sum+a[i] < s)
        {
            x.push_back(a[i]);
            Try(i,k+1,sum+a[i]);
            x.pop_back();
        }
    }
}

int main()
{
    Sang();
    int t; cin>> t;
    while(t--)
    {
        cin>> n >> p >> s;
        pos = 0;
        //pos = lower_bound(a.begin(),a.end(),p) - a.begin();
        while(a[pos] <= p)
        {
            pos++;
        }
        res.clear();
        Try(pos-1,0,0);
        cout<< res.size() << endl;
        for(int i = 0; i < res.size(); i++)
        {
            for(int j = 0; j < res[i].size(); j++) cout<< res[i][j] << " ";
            cout<< endl;
        }
    }
}