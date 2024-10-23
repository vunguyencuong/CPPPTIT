#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>> t;
    cin.ignore();
    while(t--)
    {
        string s; getline(cin,s);
        int ok = 0;
        stack<char> st;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
            {
                st.push(s[i]);
            }
            if(s[i] == ')')
            {
                if(st.top() == '(')
                {
                    ok = 1;
                    break;
                }
                while(st.size() && st.top() != '(') st.pop();
                st.pop();
            }
        }
        if(ok == 1) cout<< "Yes" << endl;
        else cout<< "No" << endl;
    }
}