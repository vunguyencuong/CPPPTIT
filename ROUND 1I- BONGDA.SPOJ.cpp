#include<bits/stdc++.h>
using namespace std;
 
struct Info
{
	string ten;
	int goal;
};
 
int main()
{
	vector<Info> b(3);
	for(int i = 0;i < 2; i++)
	{
		b[i].ten = "";
		b[i].goal = 0;
	}
	int n;
	cin>> n;
	string names;
	for(int i = 0 ;i < n;i++)
	{
		cin>> names;
		if(i == 0)
		{
			b[0].ten = names;
			b[0].goal++;
		}
		else
		{
			if(names == b[0].ten) b[0].goal++;
			else
			{
				b[1].ten = names;
				b[1].goal++;
			}
		}
	}
	if(b[0].goal > b[1].goal) cout<< b[0].ten << endl;
	else if(b[0].goal < b[1].goal) cout<< b[1].ten << endl;
} 
