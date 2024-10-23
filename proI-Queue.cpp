#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base:: sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
typedef long long ll;
vector<ll> v;
queue<ll> q;
void Mang68()
{
    q.push(6);
    q.push(8);
    while(true)
    {
        ll num = q.front(); q.pop();
        v.push_back(num);
        if((num*10 + 6) > 1e18) break;
        q.push(num*10+6);
        if(num*10+8 > 1e18) break;
        q.push(num*10+8);

    }
    while(!q.empty())
    {
        v.push_back(q.front());
        q.pop();
    }
}

int main()
{
    faster();
    Mang68();
    int t;
    cin>> t;
    while(t--)
    {
        ll a,b;
        cin>> a >> b;
        ll count = 0;
        for(int i = 0; i < v.size(); i++)
        {
            if(v[i] > b) break;
            if(v[i] >= a) count++;
        }
        cout<< count << endl;
    }
}