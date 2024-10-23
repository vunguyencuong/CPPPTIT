#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1e9+7;
vector<vector<ll>> multi(vector<vector<ll>> a, vector<vector<ll>> b)
{
    int size = a.size();
    vector<vector<ll>> res(size, vector<ll>(size));
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            for(int k = 0; k < size; k++)
            {
                res[i][j] = (res[i][j] + a[i][k] * b[k][j])%mod; 
            }
        }
    }
    return res;
}

vector<vector<ll>> pow(vector<vector<ll>> a, int n)
{
    vector<vector<ll>> res = a;
    n--;
    for(;n;n/=2, a = multi(a,a))
    {
        if(n % 2 != 0) res = multi(res,a);
    }
    return res;
}

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n,k;
        cin>> n >> k;
        vector<vector<ll>> matrix(n,vector<ll>(n));
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cin>> matrix[i][j];
            }
        }
        vector<vector<ll>> res = pow(matrix,k);
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cout<< res[i][j] << " ";
            }
            cout<< endl;
        }
    }

}



