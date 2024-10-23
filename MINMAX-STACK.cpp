#include <iostream>
#include<stack>
using namespace std;
 
 
 
int main() {
 
	stack<int> st;
 
	int a[] = {4,3,6,3,6,5,4,2,7};
	int n = 9;
	int L[9] = {}; // L[i] lưu vvị trí xa nhất về phía bên trái mà pphần tử  a[i]  có thể cắt được 
	int R[9] = {}; // R[i] lưu vvị trí xa nhất về phía bên phải mà pphần tử  a[i]  có thể cắt được 
 
	// Cắt bên trái
	for(int i = 0; i < n; i++){
		while(!st.empty() && a[st.top()] >= a[i]) st.pop();
		if(st.empty()) L[i] = 0;
		else L[i] = st.top() + 1;
		st.push(i);
	}
 
	// clear stack
	while(st.size()) st.pop();
 
	// Cắt bên phải
 
	for(int i = n -1; i >= 0; i--){
		while(!st.empty() && a[st.top()] >= a[i]) st.pop();
		if(st.empty()) R[i] = n-1;
		else R[i] = st.top() - 1;
		st.push(i);
	}
	// ban dua
	// for(int i =0; i< n; i++){
	// 	if(a[i] <= R[i]-L[i] + 1){
	// 		res = max(res, a[i]);
	// 	}
	// 	else {
	// 		res = max(res, R[i]-L[i] + 1);
	// 	}
	// }
	// cout << res;
 
	for(int i = 0 ; i < n; i++){
		cout << R[i]-L[i] + 1 << endl;
	}
 
 
	return 0;
}