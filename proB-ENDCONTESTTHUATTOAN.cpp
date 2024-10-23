#include<bits/stdc++.h>
using namespace std;

void Sinh(int a[], int len, int &ok)
{
     int i = len-1;
     while(i > 0 && a[i] > a[i+1])i--;
     if(i > 0)
     {
         int k = len;
         while(a[i] > a[k])k--;
         int tmp = a[i];
         a[i] = a[k];
         a[k] = tmp;
         int l = i+1, r = len;
         while(l <= r)
         {
             int tmp = a[l];
             a[l] = a[r];
             a[r] = tmp;
             l++,r--;
         }
     }
     else ok = 0;
}

bool check(string s)
{
    for(int i = 0; i < s.length()-1; i++)
    {
        if(s[i] == s[i+1]) return false;
    }
    return true;
}
int main()
{
    ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s; cin>> s;
    int len = s.length();
    vector<string> ans;
    if(check(s)) ans.push_back(s);
    int a[len+1]={0};
    for(int i = 1; i <= len; i++) a[i] = i-1;
    int ok = 1;
    while(ok)
    {
        string res = "";
        Sinh(a,len,ok);
        for(int i = 1; i <= len; i++)
        {
            res += s[a[i]];
        }
        if(check(res)) ans.push_back(res);
    }
    if(ans.size() == 0) cout<< "INVALID" << endl;
    else
    {
        sort(ans.begin(),ans.end());
        cout<< ans[0] << endl;
        for(int i = 1; i < ans.size(); i++)
        {
            if(ans[i-1] != ans[i])
            { 
                cout<< ans[i] << endl;
            }
        }
    }
}
