#include<bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		float a;
		cin>> a;
		float dinh = 2.0/(1.0-(a/180.0));
		int check = dinh;
		if(check == dinh) cout<< "YES" << endl;
		else cout<< "NO" << endl;
	//	cout<< dinh << " " << check ;
	}
}
