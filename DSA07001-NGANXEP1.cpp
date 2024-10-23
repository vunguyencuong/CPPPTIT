#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    string s; int n;
    while(cin>> s)
    {
        if(s == "push")
        {
            cin>> n;
            st.push(n);
        }
        else if(s == "pop")
        {
            st.pop();
        }
        else if(s == "show")
        {
            if(st.size())
            {
                stack<int> res;
                while(st.size())
                {
                    res.push(st.top());
                    st.pop();
                }
                while(res.size())
                {
                    cout<< res.top() << " ";
                    st.push(res.top());
                    res.pop();
                }
            }
            else cout<< "empty";
            cout<< endl;
        }
    }
}