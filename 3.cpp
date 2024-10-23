#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int dem=0;
    getline(cin,s);
	int l = s.size();
	while(s[0] == ' ') s.erase(0,1); 
   	while(s[l-1] == ' ') s.erase(l-1,1); 
   	while(s.find("  ") != -1) s.erase(s.find("  "),1);
   	for(int i=0;i<s.size();i++)
   	{
   		if(s[i]==' ') dem++;	
	}
	dem++;
	cout<<dem<<endl;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!=' ')
			cout<<s[i];
		else cout<<endl;
	}
}
