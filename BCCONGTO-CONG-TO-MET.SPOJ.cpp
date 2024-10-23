#include<bits/stdc++.h>
using namespace std;
int main()
{
	while(true)
	{
		string s;
		cin>> s;
		if(s == "0") return 0;
		long long S = 0;
		for(int i = 0; i < s.length(); i++)
		{
			int num = s[i] - '0';
			if(num > 4 ) num--;
			S = S*9+num;
		}
		cout<< s << ':' << " " << S << endl;
	}
	
	
	
	return 0;
}
