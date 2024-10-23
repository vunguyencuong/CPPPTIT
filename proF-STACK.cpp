#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
// cach nay cham
/*
int main()
{
    faster();
    int n;
    cin>> n;
    vector<int> v(n+1);
    for(int i = 0; i < n; i++) cin>> v[i];
    stack<int> s;
    int index = 0;
    while(index < n)
    {
        s.push(v[index]);
        int index1 = 0;
        for(int i  =index+1; i < n; i++)
        {
            if(s.top() < v[i])
            {
                index1 = i;
                s.pop();
                s.push(v[i]);
                break;
            }
        }
        if(index1 == 0) s.push(-1);
        int check = 0;
        for(int i = index1+1; i < n; i++)
        {
            if(s.top() > v[i])
            {
                s.pop();
                s.push(v[i]);
                check = 1;
                break;
            }
        }
        if(check == 1) cout<< s.top() << " ";
        else cout<< -1 << " ";
        index++;
    }
}
*/

void solve()
{
    int n;
    cin>> n;
    vector<int> a(n),Min(n),Max(n);
    stack<int> st;
    for(int i = 0; i < n; i++) cin>> a[i];
    for(int i = n-1; i >= 0 ;i--) // tìm phần tử max của a[i];
    {
        while(st.size() && a[i] >= a[st.top()]) st.pop(); // stack lưu phần tử lớn nhất phía bên phải của a[i]
        if(st.empty()) Max[i] = -1; // rỗng thì gắn luôn là -1
        else Max[i] = st.top(); // không rỗng thì phần tử lớn hơn thứ nhất của a[i] là a[top]
        st.push(i);
    }
    while(st.size()) st.pop();
    for(int i = n-1; i >= 0; i--)
    {
        while(st.size() && a[i] <= a[st.top()]) st.pop();
        if(st.empty()) Min[i] = -1;
        else Min[i] = st.top();
        st.push(i);
    }
    for(int i = 0; i < n; i++)
    {
        if(Max[i] == -1) cout << -1 << " ";
        else
        {
            if(Min[Max[i]] == -1) cout<< -1 << " ";
            else cout<< a[Min[Max[i]]] << " ";
        }
    }
}
int main()
{
    faster();
    solve();
}