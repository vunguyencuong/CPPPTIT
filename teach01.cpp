#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	int l = s.size();
	while(s[0] == ' ') s.erase(0,1); // xoa khoang trang o dau day
   	while(s[l-1] == ' ') s.erase(l-1,1); // xoa khoang trang o cuoi day
	while(s.find("  ") != -1) s.erase(s.find("  "),1); // xoa khoang trang o giua day
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32; // dua ve in thuong
	}
	if(s[0] >= 'a' && s[0] <= 'z') s[0] -= 32; // dua ky tu dau tien thanh in hoa
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] == ' ' && s[i+1] >='a' && s[i+1] <='z') s[i+1] -= 32; 
	}
	cout<< s << endl;	
}

//Nguyen Van An        
// char a[10005]; <=> string a;


