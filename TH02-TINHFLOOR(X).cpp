#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>> t;
    while(t--)
    {
        int n, k; cin>> n >> k;
        vector<long long > a(n);
        for(int i = 0; i < n; i++) cin>> a[i];
        int ans = lower_bound(a.begin(),a.end(),k) - a.begin();
        if(a[ans] != k) ans--; // không tìm được số thỏa mãn trả về 0
        if(ans != -1) ans++; // vị trí bắt đầu từ 1 
        cout<< ans << endl;
    }
}