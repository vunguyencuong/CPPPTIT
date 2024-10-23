#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n; cin>> n;
    int a[n+5] = {};
    vector<int> le;
    vector<int> chan;
    for(int i = 1; i <= n; i++)
    {
        cin>> a[i];
        if(i % 2 == 0) chan.push_back(a[i]);
        else le.push_back(a[i]);
    }
    sort(le.begin(),le.end());
    sort(chan.rbegin(),chan.rend());
    int id1 = 0, id2 = 0;
    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 0) cout<< chan[id2++] << " ";
        else cout<< le[id1++] << " ";
    }
    cout<< endl;
}