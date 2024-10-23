#include<bits/stdc++.h>
using namespace std;


int main()
{
    int q; cin>> q;
    string s; int n;
    stack<int> st; 
    while(q--)
    {
        cin>> s;
        if(s == "PUSH")
        {
            cin>> n;
            st.push(n);
        }
        else if(s == "POP")
        {
            if(st.size()) st.pop();
        }
        else if(s == "PRINT")
        {
            if(st.size()) cout<< st.top() << endl;
            else cout<< "NONE" << endl;
        }
    }
}