#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>> t;
    while(t--)
    {
        string s; cin>> s;
        int tanso[125]={};
        int len = s.length();
        for(int i = 0; i < len; i++)
        {
            tanso[s[i]]++;
        }
        int max = 0;
        for(int i = 0; i < len; i++)
        {
            if(tanso[s[i]] > max)
            {
                max = tanso[s[i]];
                tanso[s[i]] = 0;
            }
        }
        if(max <= (len+1)/2) cout<< 1 << endl; // <= 1 nửa thì có thể dàn đều ra và xếp các chữ cái khác xen kẽ vào
        else cout<< 0 << endl;
    }
}
