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
		int count = 0;
		while(s.find("  ") != -1) s.erase(s.find("  "),1);
		for(int i = 0; i < s.size(); i++)
		{
			if(s[i]==' ') count++;
		}
		cout<< count << endl;
	}
}
