#include<bits/stdc++.h>
using namespace std;

struct data
{
    int num;
    int ts;

};
bool cmp(data a, data b)
{
    if(a.ts > b.ts) return true;
    if(a.ts == b.ts) return a.num < b.num;
    return false;
}
int main()
{
    ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>> t;
    while(t--)
    {
        int n; cin>> n;
        vector<data> v;
        for(int i = 0; i < n; i++)
        {
            
        }
        sort(v.begin(),v.end(),cmp);
        for(int i = 0; i < v.size(); i++)
        {
            for(int j = 0; j < v[i].ts; j++) cout<< v[i].num << " ";
        }
        cout<< endl;
    }
}