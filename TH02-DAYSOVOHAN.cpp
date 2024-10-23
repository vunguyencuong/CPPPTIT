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
				res[i][j] = (res[i][j] + a[i][k]*b[k][j])%mod;
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
        ll n;
        cin>> n;
        vector<vector<ll>> A(2,vector<ll>(2));
		A[0][0] = 0;
		A[0][1] = 1;
		A[1][0] = 1;
		A[1][1] = 1;
		vector<vector<ll>> res = pow(A,n);
		cout<< res[0][1] << endl;
    }
}