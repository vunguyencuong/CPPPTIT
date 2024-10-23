#include<stdio.h>

main()
{
	int n;
	long long sum = 0;
	while(n > 0){
		sum += n*(n-1)/2;
		n -= 1;
	}
	cout<< sum << endl;	
}
