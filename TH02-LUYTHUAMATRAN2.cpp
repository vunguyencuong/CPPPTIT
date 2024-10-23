#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1e9+7;
vector<vector<ll>> multi(vector<vector<ll>> a, vector<vector<ll>> b)
{
	int size = a.size();
	vector<vector<ll>> res(size, vector<ll> (size));
	for(int i = 0; i < size;i++)
	{
		for(int j = 0; j < size; j++)
		{
			for(int k = 0; k < size; k++)
			{
				res[i][j] = (res[i][j] + a[i][k]*b[k][j]%mod)%mod;
			}
		}
	}
	return res;
}

vector<vector<ll>> pow(vector<vector<ll>> a, int n)
{
	if(n == 1) return a;
	if(n % 2 == 0) return pow(multi(a,a),n/2);
	else return multi(a,pow(multi(a,a),n/2));
}

int main()
{
	int t;
    cin>> t;
    while(t--)
    {
        ll n,k;
        cin>> n >> k;
        vector<vector<ll>> A(n,vector<ll>(n));
		for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++) cin>> A[i][j];
        }
        vector<vector<ll>> ans = pow(A,k);
        ll sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum = (sum + ans[i][n-1]%mod) % mod;
        }
        cout<< sum << endl;
    }
}