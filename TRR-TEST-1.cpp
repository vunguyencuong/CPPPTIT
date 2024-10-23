#include<bits/stdc++.h>
using namespace std;
int a[100][100], n, d;
stack<int> st, CE;
void Euler(int u){
	st.push(u);
	d = 1;
	while(!st.empty()){
		int t = st.top(), ok = 0;
		for(int i = 1; i <= n; i++){
			if(a[t][i] == 1){
				ok = 1;
				st.push(i);
				a[t][i] = a[i][t] = 0;
				break;
			}
		}
		if(!ok){
			CE.push(t);
			st.pop();
		} 
	}
}
int main(){
	int s, sum, c = 0;
	cin >> n >> s;
	for(int i = 1; i <= n; i++){
		sum = 0;
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
			sum += a[i][j];
		}
		if(sum % 2) c++;
	}
	if(c != 0 && c != 2){
		cout << "no Euler cycle";
		return 0;
	} 
	Euler(s);
	while(!CE.empty()){
		cout << CE.top() << ' ';
		CE.pop();
	}		

}