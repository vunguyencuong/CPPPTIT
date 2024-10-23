#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>> t;
    cin.ignore();
    while(t--)
    {
        stack<char> st;
        string s; cin>> s;
        int len = s.length();
        if(len % 2 == 1) cout<< -1 << endl;
        else
        {
            for(int i = 0; i < len; i++)
            {
                if(s[i] == ')' && !st.empty())
                {
                    if(st.top() == '(') st.pop();
                    else st.push(s[i]);
                }
                else st.push(s[i]);
            }
            int k = st.size(), n = 0;
            while (!st.empty() && st.top() == '(')
            {
                st.pop();
                n++;
            }
            cout << (k / 2 + n % 2) << endl;
        }
    }
}
