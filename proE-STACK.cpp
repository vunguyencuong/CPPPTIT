#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int minMax(int b[], int m)
{
    stack<int> st;
    int l[m+1];
    int r[m+1];
    for(int i = 0; i < m; i++)
    {
        while(st.size() && b[st.top()] >= b[i]) st.pop();
        if(st.empty()) l[i] = 0;
        else l[i] = st.top() + 1;
        st.push(i);
    }
    while(!st.empty()) st.pop();
    for(int i = m-1; i >= 0; i--)
    {
        while(st.size() && b[st.top()] >= b[i]) st.pop();
        if(st.empty()) r[i] = m-1;
        else r[i] = st.top() - 1;
        st.push(i);
    }
    // res là diện tích của hình chữ nhật lớn nhất
    int res = 0;
    for(int i = 0; i < m; i++)
    {
        res = max(res, b[i]*(r[i]-l[i]+1));
    }
    return res;
}

void solve()
{
    int n,m;
    cin>> n >> m;
    int a[n+1][m+1];
    int b[m+1] = {0};
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin>> a[i][j];
        }
    }
    int Max = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(a[i][j]) b[j] = b[j] + 1;
            else b[j] = 0;
        }
        Max = max(Max,minMax(b,m)); 
    }
    cout<< Max << endl;

}

int main()
{
    faster();
    solve();
}