#include<bits/stdc++.h>
using namespace std;
vector<string> s;

int moves(int n)
{
    int ans = INT_MAX;
    for(int i =0; i < n; i++)
    {
        int count = 0;
        for(int j = 0; j < n; j++)
        {
            string tmp = s[j]+s[j];
            int index = tmp.find(s[i]);
            if(index == string::npos)
                return -1;
            count += index;
        }
        ans = min(ans,count);
    }
    return ans;
}


int main()
{
    int n;
    cin>> n;
    for(int i = 0; i < n; i++)
    {
        string a;
        cin>> a;
        s.push_back(a);
    }
    cout<< moves(n);
}