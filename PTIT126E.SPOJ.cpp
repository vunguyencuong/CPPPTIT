#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(true)
	{
		string s;
		cin>> s;
		for(int i = 0; i < s.size();i++)
		{
			if(s[i] == '#')
			{
				return 0;
				break;
			}
		}
		int count = s.size();
		int count1 = 0, count2 = 0, count3 = 0;
		for(int i = 0; i < s.size(); i++)
		{
			if(s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
			if(s[i] == 'Y') count1 ++;
			if(s[i] == 'N') count2 ++;
			if(s[i] == 'A') count3 ++;
		}
		//cout<< count << endl;;
		if(count3 >= (double)count/2) cout<<"need quorum"<< endl;
		else if(count3 < (double)count/2)
		{
			if(count1 > count2) cout<<"yes" << endl;
			else if(count1 < count2) cout<<"no" << endl;
			else if(count1 == count2) cout<< "tie" << endl; 
		}
	}
}
