#include<iostream>
#include<stack>
using namespace std;

int main()
{
    string s;
    stack<int> st;
    while(true)
    {
        cin>> s;
        if(s.compare("init") == 0) 
        {
            while(st.empty() == 0) st.pop();
        }
        if(s.compare("push") == 0)
        {
            int x;
            cin>> x;
            st.push(x);
        }
        if(s.compare("pop") == 0)
        {
            if(s.empty() == 0) s.pop();
        }
        if(s.compare("top") == 0)
        {
            if(st.empty() == 0) cout<< st.top() << endl;
            else cout<< -1 << endl;
        }
        if(s.compare("size") == 0) cout<< st.size() << endl;
        if(s.compare("empty") == 0) cout<< st.empty() << endl;
        if(s.compare("end") == 0) break;
    }
}

