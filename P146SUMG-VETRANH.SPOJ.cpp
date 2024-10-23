#include<bits/stdc++.h>
using namespace std;
int main()
{
	int R,C,A,B;
	cin>> R >> C >> A >> B;
	char a[R+1][C+1]={};
	for(int i = 0; i < R ;i++)
	{
		for(int j = 0; j < C; j++)
		{
			cin>> a[i][j];
		}
	}
	for(int i = 0; i < R; i++)
	{
		for(int j = 0; j < A; j++ )
		{
			for(int k = 0; k < C; k++)
			{
				for(int p = 0; p < B; p++)
				{
					cout<< a[i][k];
				}
			}
			if (j != A-1) cout<< endl;
		}
		cout<< endl;
	}
	
	
	
	return 0;
}
