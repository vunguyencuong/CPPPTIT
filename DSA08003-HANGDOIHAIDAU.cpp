#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, x;
    cin >> n;
    string s;
    deque<int> dq;
    while (n--)
    {
        cin >> s;
        if (s == "PUSHFRONT")
        {
            cin >> x;
            dq.push_front(x);
        }
        else if (s == "PRINTFRONT")
        {
            if (dq.size())
                cout << dq.front() << endl;
            else
                cout << "NONE" << endl;
        }
        else if (s == "POPFRONT")
        {
            if (dq.size())
                dq.pop_front();
        }
        else if (s == "PUSHBACK")
        {
            cin >> x;
            dq.push_back(x);
        }
        else if (s == "PRINTBACK")
        {
            if (dq.size())
                cout << dq.back() << endl;
            else
                cout << "NONE" << endl;
        }
        else if (s == "POPBACK")
        {
            if (dq.size())
                dq.pop_back();
        }
    }
}