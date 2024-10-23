#include<bits/stdc++.h>
using namespace std;


int main()
{
    int T=1;
    cin>>T;
    while(T--){
        int n; cin>>n;
        set<int> a;
        for(int i=0; i<n; i++)
        {
            int u, v; char c;
            cin>>u>>v>>c;
            a.insert(u);
            a.insert(v);
        }
        for(set<int>::iterator it=a.begin(); it!=a.end(); it++)
        {
            cout<<*it<<' ';
        }
        cout<<endl;
    }
    return 0;
}