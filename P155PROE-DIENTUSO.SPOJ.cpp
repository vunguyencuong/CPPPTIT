#include<bits/stdc++.h>
using namespace std;
int main()
{
	// 0 => 2
	// 1 => 7
	// 2 => 2
	// 3 => 3
	// 4 => 3
	// 5 => 4
	// 6 => 2
	// 7 => 5
	// 8 => 1
	// 9 => 2
	string n;
	cin>> n;
	if(n.length() > 2) n.insert(n.begin(),'0');
	int count = 1;
	for(int i = 0; i < n.length(); i++)
	{
		if(n[i] == '0') count *= 2;
		if(n[i] == '1') count *= 7;
		if(n[i] == '2') count *= 2;
		if(n[i] == '3') count *= 3;
		if(n[i] == '4') count *= 3;
		if(n[i] == '5') count *= 4;
		if(n[i] == '6') count *= 2;
		if(n[i] == '7') count *= 5;
		if(n[i] == '8') count *= 1;
		if(n[i] == '9') count *= 2;
	}
	cout<< count << endl;
	return 0;
}
