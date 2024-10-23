#include<bits/stdc++.h>
using namespace std;

long long toNum(int k, string a)
{
    int mod = 0;
    long long num = 0;
    int id = 0;
    int len = a.length();
    while(len--)
    {
        mod = a[id] - '0';
        num = num*k + mod;
        id++;
    }
    return num;
}

string toK(int k, long long sum)
{
    vector<int> mod;
    string res = "";
    while(sum)
    {
        mod.push_back(sum%k);
        sum /= k;
    }
    for(int i = mod.size()-1; i >= 0; i--) res += mod[i] + '0';
    return res;
}

int main()
{
    int t; cin>> t;
    while(t--)
    {
        int k; cin>> k;
        cin.ignore();
        string a,b; cin>> a >> b;
       //cout<< toNum(k,a) << " " << toNum(k,b) << endl;
       long long sum = toNum(k,a) + toNum(k,b);
       cout<< toK(k,sum) << endl;
    }
}