#include <bits/stdc++.h>
using namespace std;

string ts = "+-*/^";
bool check(char c)
{
    for (int i = 0; i < ts.size(); i++)
    {
        if (ts[i] == c) return 1;
    }
    return 0;
}
bool check1(char c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
int check2(char c)
{
    if (c == '^') return 50;
    if (c == '*' || c == '/') return 100;
    if (c == '+' || c == '-') return 300;
    return 1000;
}
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s, ans;
        cin >> s;
        stack<char> st;
        st.push('#');
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                st.push(s[i]);
                continue;
            }
            if (s[i] == ')')
            {
                while (st.top() != '(')
                {
                    ans += st.top();
                    st.pop();
                }
                st.pop();
                continue;
            }
            if (check1(s[i]))
            {
                ans += s[i];
                continue;
            }
            if (check(s[i]))
            {
                while (check2(st.top()) <= check2(s[i]))
                {
                    ans += st.top();
                    st.pop();
                }
                st.push(s[i]);
                continue;
            }
        }
        while (st.top() != '#')
        {
            ans += st.top();
            st.pop();
        }
        cout << ans << endl;
    }
}