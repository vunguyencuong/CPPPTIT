#include<bits/stdc++.h>
using namespace std;
string s1 = "+-*/";
bool check(char c)
{
    for(int i = 0; i < s1.length(); i++)
    {
        if(s1[i] == c) return true;
    }
    return false;
}

int main()
{
    int t; cin>> t; 
    cin.ignore();
    while(t--)
    {
        string s; cin>> s;
        stack<string> st;
        string res;
        for(int i = s.length()-1; i >= 0; i--)
        {
            if(check(s[i]))
            {
                res = '(' + st.top();
                st.pop();
                res += s[i];
                res = res + st.top() + ')';
                st.pop();
                st.push(res);
            }
            else st.push(string(1,s[i]));
        }
        cout<< st.top() << endl;
    }
}