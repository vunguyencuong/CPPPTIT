#include<bits/stdc++.h>
using namespace std;

vector<int> a;
void build(int l, int r){
    if(l > r) {
        return;
    }
    int mid = (l+r) / 2;
    cout<<a[mid]<<' ';
    build(l, mid-1);
    build(mid+1, r);
}

int main()
{
    int T=1;
    cin>>T;
    while(T--)
    {
        int n; cin>>n;
        a.clear(); a.resize(n);
        for(int i=0; i<n; i++) cin>>a[i];
        sort(a.begin(), a.end());
        build(0, n-1);
        cout<<endl;
    }
    return 0;
}