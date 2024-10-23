#include<bits/stdc++.h>
using namespace std;
long long a[1000][1000];
long long m,n;

//void solve(int b[1000], int m){
//	int tmp;
//	for(int i = 1; i <= m; i++){
//		for(int j = 1; j < m; j++){
//			if(b[j] > b[j+1]){
//				tmp = b[j];
//				b[j] = b[j+1];
//				b[j+1] = tmp;
//			}
//		}
//	}	
//}

int main()
{
	cin>>m>>n;
	int b[1000];
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
			if(i == 2) b[j] = a[i][j];
		}
	}
	cout<< "------------------" << endl;
	sort(b+1,b+n+1); //1 - n
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++){
			if(i == 2){
				cout<< b[j] << " ";
			} else cout<< a[i][j] << " ";
		}
		cout<< endl;
	}
}


