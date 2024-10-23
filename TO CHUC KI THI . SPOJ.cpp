#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a==2*b&&c%3==0){
		cout<<b-c/3;
	}else
	if(a>=2*b){
		if(a-2*b-c>=0){
			cout<<b;
		}else{
		int max=b;
		c=c-(a-2*b);
		cout<<(max-(c/3)-1);
		}
	}else{
		if(a%2==0){
			if(b-a/2-c>=0){
				cout<<a/2;
			}else{
			int max=a/2;
			c=c-(b-a/2);
			cout<<(max-(c/3)-1);
			}
		}
		if(a%2==1){
			if(b-(a-1)/2-c+1>=0){
				cout<<(a-1)/2;
			}else{
			int max=(a-1)/2;
			c=c-1-(b-max);
			cout<<(max-(c/3)-1);
		}
		}
	}
	
}
