#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>> t;
    while(t--)
    {
        string s; cin>> s;
        int k; cin>> k;
        int count = 0;
        for(int i = 0; i < s.length(); i++)
        {
            int check = 0;
            int tanso[125]={0};
            for(int j = i; j < s.length(); j++)
            {
                if(tanso[s[j]] == 0)
                {
                    check++; // đếm số chữ cái khác nhau 
                    tanso[s[j]]++;
                }
                if(check > k) break;
                if(check == k) count++; // = với yêu cầu thì +1 dãy con
            }
        }
        cout<< count << endl;
    }
}
