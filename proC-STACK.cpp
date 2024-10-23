#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>> s;
    stack<string> st;
    int len = s.length();
    for(int i = 0; i < len; i++)
    {
        if(isalpha(s[i])) st.push(string(1,s[i]));
        else
        {
            string x = st.top();
            st.pop();
            string y = st.top();
            st.pop();
            st.push(s[i]+y+x);
        }
    }
    cout<< st.top() << endl;
}