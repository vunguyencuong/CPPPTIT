#include<bits/stdc++.h>
using namespace std;
double bieuthuc(int n)
{
	if(n == 1) return 1;
	return sqrt(n+bieuthuc(n-1));
}
int main()
{
	int n;
	cin>> n;
	cout<< bieuthuc(n); 
}

