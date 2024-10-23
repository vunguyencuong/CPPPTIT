#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n,k; cin>> n >> k;
	vector<int> a(n,0);
	vector<int> sumAtId;
	int sum = 0;
	int id;
	int check = 0;
	for(int i = 0; i < n; i++){
		cin>> a[i];
		sum += a[i];
		sumAtId.push_back(sum);
	} 
	if(sum % (k+1)) cout<< "0" << endl;
	else{
		int sum1 = sum/(k+1);
		for(int i = 0; i < n; i++){
			if(sumAtId[i] == sum1 || sum - sumAtId[i] == sum1){
				check = 1;
				id = i;
				break;
			}
		}
		if(check == 0) cout<< 0 << endl;
		else{
			for(int i = 0; i <= id; i++) cout<< a[i] << " ";
			cout<< endl;
			for(int i = id+1; i < n; i++) cout<< a[i] << " ";
			cout<< endl;
		}
	}
}
