#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
int main()
{
    faster();
    int t;
    cin>> t;
    while(t--)
    {
        int k;
        string s;
        cin>> k;
        cin>> s;
        int tanso[95]={0};
        for(int i = 0; i < s.length(); i++)
        {
            tanso[s[i]]++;
        }
        priority_queue<int> q;
        for(int i = 0; i < s.length(); i++)
        {
            if(tanso[s[i]] > 0)
            {
                q.push(tanso[s[i]]);
                tanso[s[i]] = 0;
            }
        }
        while(q.top() != 0 && k > 0)
        {
            ll top = q.top(); q.pop();
            k--;top--;
            q.push(top);
        }
        ll ans = 0;
        while(q.size())
        {
            ans += q.top()*q.top();
            q.pop();
        }
        cout<< ans << endl;
    }
}