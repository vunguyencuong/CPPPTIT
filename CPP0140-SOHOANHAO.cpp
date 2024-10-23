#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
int main()
{
    faster();
    int t;
    cin>> t;
    while(t--)
    {
        ll n;
        cin>> n;
        int check = 0;
        ll num[7] = {6,28,496,8128,33550336,8589869056,137438691328};
        for(int i = 0; i < 7; i++)
        {
            //cout<< num[i]
            if(n == num[i])
            { 
                check = 1;
                break;
            }
        }
        if(check == 1) cout<< 1 << endl;
        else cout<< 0 << endl;
    }
}