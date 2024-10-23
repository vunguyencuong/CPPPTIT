#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k; cin>> n >> k;
    vector<string> s(n);
    for(int i = 0; i < n; i++){
        cin>> s[i];
    }

    int dem = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j <= n && j -i <= k; j++){
            if(s[i].size() == s[j].size()) dem++;
        }
    }
    cout<< dem << endl;
}