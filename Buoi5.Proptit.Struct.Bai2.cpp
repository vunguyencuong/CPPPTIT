#include<bits/stdc++.h>
using namespace std;

struct inFo
{
	string name;
	int point1;
	int point2;
	int point3;
	int point;
	inFo()
	{
		name = " ";
		point1 = 0;
		point2 = 0;
		point3 = 0;
		point = 0;
	}
};



int main()
{
	int n;
	cin>> n;
	vector<inFo> s(n);
	cin.ignore();
	for(int i = 0; i < n ; i++)
	{
		getline(cin,s[i].name);
	}
	for(int i = 0; i < n; i++)
	{
		cin>> s[i].point1;
	}
	for(int i = 0; i < n; i++)
	{
		cin>> s[i].point2;
	}
	for(int i = 0; i < n; i++)
	{
		cin>> s[i].point3;
	}
	for(int i = 0; i < n; i++)
	{
		s[i].point = s[i].point1 +  s[i].point2 +  s[i].point3;
	}
	int  max = 0; 
	for(int i = 0; i < n ; i++)
	{
		if(s[i].point > max) max = s[i].point;
	}
	for(int i = 0 ; i < n; i++)
	{
		if(max == s[i].point)
		{
				cout<< s[i].name << " " << s[i].point1 << " " << s[i].point2 << " " << s[i].point3 << " " << endl;
		}
	}
	
	return 0 ;
}
