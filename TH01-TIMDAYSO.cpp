#include<bits/stdc++.h> 
using namespace std;

int main()
{
    int n; cin>> n;
    int ans = 0;
    vector<int> a(n);
    int Min = 3000;
    for(int i = 0; i < n; i++)
    {
        cin>> a[i];
        Min = min(Min,a[i]);
    }
    for(int i = Min; i >= 1; i--)
    {
        for(int j = 0; j < n; j++)
        {
            int x = a[j]/i;
            if(a[j] / x == i)
            {
                while(x && a[j]/x == i) x--;
                ans += x+1;
            }
            else{
                ans = 0;
                break;
            }
        }
        if(ans)
        {
            cout<< ans << endl;
            break;
        }
    }
}
