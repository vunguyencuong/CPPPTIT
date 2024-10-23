#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
void solve( int n)
{
    priority_queue<int> q;
    priority_queue<int, vector<int>, greater<int>> q1,q2;
    ll sum = 0;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin>> x;
        sum += x;
        if(x % 3 == 0) q.push(x);
        else if(x % 3 == 1) q1.push(x);
        else q2.push(x);
    }
    // q chia het cho 3 giam dan, q1,q2 giam dan
    if(sum % 3 == 1)
    {
        if(!q1.empty()) q1.pop();
        else
        {
            if(q2.size() < 2)
            {
                cout<< -1;
                return;
            }
            q2.pop(); q2.pop();
        }
    }
    if(sum % 3 == 2)
    {
        if(!q2.empty()) q2.pop();
        else
        {
            if(q1.size() < 2)
            {
                cout<< -1;
                return;
            }
            q1.pop(); q1.pop();
        }
    }
    while(!q1.empty())
    {
        q.push(q1.top());
        q1.pop();
    }
    while(!q2.empty())
    {
        q.push(q2.top());
        q2.pop();
    }
    if(q.empty()) cout<< -1;
    else
    {
        if(q.top() == 0)
        {
            cout<< 0;
            return;
        }
        while(!q.empty())
        {
            cout<< q.top();
            q.pop();
        }
    }
}
 
 
int main()
{
    faster();
    int t;
    cin>> t;
    while(t--)
    {
        int n; cin>> n;
        solve(n);
        cout<< endl;
    }
}