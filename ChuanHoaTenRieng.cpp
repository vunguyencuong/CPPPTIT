#include<iostream>
#include<string>
using namespace std;
int main()
{
	int T;
	cin>> T;
	cin.ignore();
	while(T--)
	{
		string s;
		getline(cin,s);
		int l = s.size();
		while(s[0] == ' ') s.erase(0,1);
   		while(s[l-1] == ' ') s.erase(l-1,1);
		while(s.find("  ") != -1) s.erase(s.find("  "),1);
		for(int i = 0; i < s.size(); i++)
		{
			if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
		}
		if(s[0] >= 'a' && s[0] <= 'z') s[0] -= 32;
		for(int i = 0; i < s.size(); i++)
		{
			if(s[i] == ' ' && s[i+1] >='a' && s[i+1] <='z') s[i+1] -= 32;
		}
		cout<< s << endl;
	}
}
