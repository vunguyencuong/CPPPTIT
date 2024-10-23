#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int l = s.size();
	while(s[0] == ' ') s.erase(0,1);
   	while(s[l-1] == ' ') s.erase(l-1,1);
	while(s.find("  ") != -1) s.erase(s.find("  "),1);
	int count = 1;
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] == ' ') count++;
	}
	cout<< count << endl;
}
