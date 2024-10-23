#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int solve()
{
    int n;
    cin>> n;
    int a[n+1][n+1];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>> a[i][j];
        }
    }
    stack<int> st; //  stack chua id cua nguoi noi tieng can tim
    for(int i = 0; i < n; i++) st.push(i); // gia su tat ca deu la nguoi noi tieng
    while(st.size() > 1 )
    {
        int you = st.top();
        st.pop();
        int me = st.top();
        st.pop();          //lay ra 2 nguoi dau tien de xet duyet 
        if(a[you][me]) st.push(me); // = 1 => you biet me => push me vao
        else st.push(you); // nguoc lai you ko bt  me => push you vao vi you co kha nang la ng noi tieng
    }
    if(st.empty()) return -1; // stack ronng <=> khong co nguoi noi tieng nao
    int res = st.top();
    for(int i = 0; i < n; i++)
    {
        if((i != res) && (a[res][i] == 1 || a[i][res] == 0)) return -1; // nguoi dc cho la noi tieng la nguoi ko bt ai va ai cung bt do la ng noi tieng
    }
    return res;
}
 
int main()
{
    //faster();
    int ans = solve();
    if(ans == -1) cout<< "No celebrity detected";
    else cout<< ans << " is celebrity";  
}
