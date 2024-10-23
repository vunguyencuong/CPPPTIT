#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a1,a2,b1,b2,c1,c2;
	cin>> a1 >> a2;
	cin>> b1 >> b2;
	cin>> c1 >> c2;
	long long  CCW = (b1-a1)*(c2-a2)-(c1-a1)*(b2-a2);
	if(CCW == 0) cout << "TOWARDS";
	else if(CCW > 0) cout<< "LEFT";
	else cout<< "RIGHT";
	return 0;
}
