#include<stdio.h>
 
int main(){

	int N,n,dem=0; scanf("%d",&N);
	while(N>0){
		n = N % 2;
		dem+=n;
		N = N / 2;
			
	}
	printf("%d",dem);
	
 
	return 0;
}
