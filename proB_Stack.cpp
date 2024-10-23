#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
int uutien(char c)
{
    if(c == '+' || c == '-') return 2;
    if(c == '*' || c == '/') return 3; 
    return 1;
}
 
int main()
{
    faster();
    string s;
    cin>> s;
    stack<char> st;
    int len = s.length();
    for(int i = 0; i < len; i++)
    {
        if(isalpha(s[i])) cout<< s[i];
        else if(s[i] == '(') st.push(s[i]);
        else if(s[i] == ')')
        {
            while(!st.empty() && st.top() != '(')
            {
                cout<< st.top();
                st.pop();
            }
            st.pop();
        }
        else 
        {
            while(!st.empty() && uutien(st.top()) >= uutien(s[i]))
            {
                cout<< st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty() && st.top() != '(')
    {
        cout<< st.top();
        st.pop();
    }
    //cout<< res << endl;
}
