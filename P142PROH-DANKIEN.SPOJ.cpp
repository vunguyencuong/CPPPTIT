#include<bits/stdc++.h>
using namespace std;
int main()
{
	int h,c;
	cin>>  h >> c;
	char a[h][c];
	int check[h][c];
	for(int i = 0; i < h ;i++)
	{
		for(int j = 0; j < c ;j++)
		{
			cin>> a[i][j];
			if(a[i][j] == 'S') check[i][j] = -1;
			else check[i][j] = 0;		
		}
	}
	int count = 0;
	//Ktra hang
	for(int i = 0; i < h ;i++)
	{
		int index = 1;
		for(int j = 0 ;j < c ;j++)
		{
			if(check[i][j] == -1)
			{
				index = 0;
				break;
			}
		}
		if(index == 1) 
		{
			for(int j = 0; j < c ;j++)
			{
				check[i][j] = 1;
			}
		}
	}
	//Ktra cot
	for(int i = 0; i < c ;i++)
	{
		int index = 1;
		for(int j = 0; j < h ;j++)
		{
			if(check[j][i] == -1)
			{
				index = 0;
				break;
			}
		}
		if(index == 1) for(int j = 0; j < h;j++)
		{
			check[j][i] = 1;
		}
	}
	for(int i = 0; i< h;i++)
	{
		for(int j = 0; j < c ;j++)
		{
			//cout<< check[i][j];
			if(check[i][j] == 1) count++; 
		}
	}
	cout<< count;
	
	return 0;
}
