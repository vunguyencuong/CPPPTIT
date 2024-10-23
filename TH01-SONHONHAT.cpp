#include<bits/stdc++.h>
using namespace std;
int s,d;

void solve()
{
    cin>> s >> d;
    vector<int> a;
    if(9*d < s)
    {
        cout<< -1 << endl;
        return;
    }
    while(s != 0)
    {
        if(s >= 9)
        {
            a.push_back(9);
            s -= 9;
        }
        else{
            a.push_back(s);
            s = 0;
        }
    }
    while(a.size() < d) a.push_back(0);
    sort(a.begin(),a.end());
    if(a[0] == 0)
    {
        a[0] = 1;
        for(int i = 1; i < a.size(); i++)
        {
            if(a[i] != 0){
                a[i]--;
                break;
            }
        }
    }
    for(int i : a) cout<< i;
    cout<< endl;
}

int main()
{
    int t; cin>> t;
    while(t--)
    {
        solve();
    }
}