#include<bits/stdc++.h>
using namespace std;
int n, a[25];
vector<string> res;
vector<int> res1;
int id[25];

void save()
{
    string s = "";
    for(int i = 0; i < res1.size(); i++){
        s += to_string(res1[i]) + " ";
    } 
    if(s != "") res.push_back(s);
}

bool check()
{
    res1.clear();
    for(int k = 1; k <= n; k++)
    {
        if(id[k])
        {
            res1.push_back(a[k]);
        }
    }
    if(res1.size() <= 1) return false;
    else{
        for(int k = 0; k < res1.size() - 1; k++)
        {
            if(res1[k] >= res1[k+1]) return false;
        }
    }
    return true;
}

void Try(int i)
{
    for(int j = 0; j <= 1; j++)
    {
        id[i] = j;
        if(i == n)
        {
            if(check()) save();
        } 
        else Try(i+1);
    }
}

int main()
{
    cin>> n;
    for(int i = 1; i <= n; i++) cin>> a[i];
    Try(1);
    sort(res.begin(),res.end());
    for(string i : res) cout<< i << endl;
}