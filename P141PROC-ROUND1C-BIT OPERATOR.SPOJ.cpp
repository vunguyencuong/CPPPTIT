#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>> n;
	int value  = 0;
	string s;
	for(int i = 0 ;i < n; i++)
	{

		cin>> s;
		if(s == "++x") ++value;
		if(s == "X++") value++;
		if(s == "--X") --value;
		if(s == "X--") value--;
	}
	cout<< value;
}
