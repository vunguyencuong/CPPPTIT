#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
    cin>> n;
	int a[5]={1,5,10,20,100};
	long long  result = 0;
	for(int i = 4; i>= 0 ;i--)
	{
        result += n/a[i];
		n = n%a[i];
	}
	cout<< result << endl;
}
