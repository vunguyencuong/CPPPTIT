#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n,k; cin>> n >> k;
        int a[n+5] = {0};
        deque<int> dq;
        int vl[n+5] = {0};
        for(int i = 1; i <= n; i++) cin>> a[i];
        for(int i = 1; i <= n; i++)
        {
            while(dq.size() && a[dq.back()] <= a[i]) dq.pop_back();
            dq.push_back(i);
            if(dq.front() + k <= i) dq.pop_front();
            if(i >= k) vl[i] = a[dq.front()];
        } 

        for(int i = k; i <= n; i++) cout<< vl[i] << " ";
        cout<< endl;
    }
}