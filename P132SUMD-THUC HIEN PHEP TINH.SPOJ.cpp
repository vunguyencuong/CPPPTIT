#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>> a >> b >> c;
	if(a == b + c) cout<< a << "=" << b << "+" << c;
	else if(a == b - c) cout<< a << "=" << b << "-" << c;
	else if(a == -b + c) cout<< a << "=" << -b << "+" << c;
	else if(a * b == c) cout<< a << "*" << b << "=" << c;
	else if(b * c == a) cout<< b << "=" << a << "/" << c;
	else if(a * c == b) cout<< a << "=" << b << "/" << c;
	
}
