#include<bits/stdc++.h>
using namespace std;
vector<bool> check(1e6+5,true);
void Sang()
{
    check[0] = check[1] = false;
    for(int i = 2; i*i <= 1e6+5; i++)
    {
        if(check[i] == true)
        {
            for(int j = i*i; j <= 1e6+5; j += i)
            {
                check[j] = false;
            }
        }
    }
}
int main()
{
    Sang();
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>> n;
        int ans = 0;
        for(int i = 2; i < n; i++)
        {
            if(check[i] == true && check[n-i] == true)
            {
                cout<< i << " " << n-i << endl;
                ans = 1;
                break;
            } 
        }
        if(ans == 0) cout<< -1 << endl;
    }
}