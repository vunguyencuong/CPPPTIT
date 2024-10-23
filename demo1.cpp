#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e6;
bool snt(ll n){
	if(n<2)
		return false;
	for(ll i=2;i*i<=n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
vector<bool> check(1e6+5,true);
void sangnt(){
	check[0]=check[1]=false;
	for(ll i=2;i<=1e6;i++){
		if(check[i]==true){
			for(ll j=2*i;j<=1e6;j+=i){
				check[j]=false;
			}
		}
	}
}
int main(){
	ll n;
	cin>>n;
	ll res=1;
	while(n>0){
		if(n>mod){
			if(snt(n)==false){
				res=0;
				break;
			}
		}
		else {
			if(check[n]==false){
				res=0;
				break;
			}
		}
		n/=10;
	}
	if(res==1)
		cout<<"PHAI"<<"\n";
	else cout<<"KHONG"<<"\n";
}