#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

using namespace std;
int min(int x, int y, int z) { return min(min(x, y), z); }
int bd(string str1, string str2, int m, int n){
	int dp[m+1][n+1];
	for(int i=0; i<=m; i++){
		for(int j=0; j<=n; j++){
			if(i==0) dp[i][j]=j;
			else if(j==0) dp[i][j]=i;
			else if(str1[i-1]==str2[j-1]) dp[i][j] = dp[i - 1][j - 1];
			else dp[i][j]=1+min(dp[i][j-1], dp[i-1][j], dp[i-1][j-1]);
		}
	}
	return dp[m][n];
}
void Run()
{
	string str1, str2; cin>>str1>>str2;
	cout<<bd(str1, str2, str1.length(), str2.length())<<endl;
}
int main()
{
	int t; cin>> t;
	while(t--) Run();
	return 0;
}