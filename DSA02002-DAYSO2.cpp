#include<bits/stdc++.h>
using namespace std;
int n;
int a[1000] = {};
vector<string> res;

void save()
{
    string s = ""; s += "[";
    for(int i = 1; i <= n; i++)
    {
        char c = a[i] + '0';
        s += c + " ";
    }
    s += "]";
    res.push_back(s);
}

void solve()
{ 
    save();
    while(n > 1)
    {
        for(int i = 1; i < n; i++) a[i] += a[i+1];
        n--;
        save();
    }
}

int main()
{
    int t; cin>> t;
    while(t--)
    {
        res.clear();
        cin>> n;
        for(int i = 1; i <= n; i++) cin>> a[i];
        string s = ""; s += "[";
        for(int i = 1; i < n; i++)
        {
            string c = to_string(a[i]);
            s += c + " ";
        }
        s += to_string(a[n]) + "]";
        res.push_back(s);
        while(n > 1)
        {
            for(int i = 1; i < n; i++) a[i] += a[i+1];
            n--;
            string s = ""; s += "[";
            for(int i = 1; i < n; i++)
            {
                string c = to_string(a[i]);
                s += c + " ";
            }
            s += to_string(a[n]) + "]";
            res.push_back(s);
        }
        for(int i = res.size()-1; i >= 0 ;i--)
        {
            cout<< res[i] << " ";
        }
        cout<< endl;
    }
}