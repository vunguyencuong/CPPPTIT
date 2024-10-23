#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin>> a[i];
    int len = 1;
    int max = 0;
    vector<int> currentSeq;
    currentSeq.push_back(a[0]);
    vector<int> maxSeq;
    for(int i = 1; i < n; i++){
        if(a[i] >= a[i-1]){
            len++;
            currentSeq.push_back(a[i]);
        } else{
            if(len > max){
                max = len;
                maxSeq = currentSeq;
            }
            len = 1;
            currentSeq.clear();
            currentSeq.push_back(a[i]);
        }
    }
    if(len > max){
        max = len;
        maxSeq = currentSeq;
    }
    cout<< max << endl;
    for(int i = 0; i < maxSeq.size(); i++){
        cout<< maxSeq[i] << " ";
    }
}