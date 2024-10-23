#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin>> a[i];

    vector<int> currentSeq;
    currentSeq.push_back(a[0]);
    for(int i = 1; i < n; i++){
        if(a[i] > a[i-1]){
            currentSeq.push_back(a[i]);
        } else{
            for(int i = 0; i < currentSeq.size();i++){
                cout<< currentSeq[i] << " ";
            }
            cout<< endl;
            currentSeq.clear();
            currentSeq.push_back(a[i]);
        }
    }
    for(int i = 0; i < currentSeq.size();i++){
        cout<< currentSeq[i] << " ";
    }
}