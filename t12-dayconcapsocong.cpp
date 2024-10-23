#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,d; cin>> n >> d;
    int a[1005] = {0};
    for(int i = 0; i < n; i++) cin>> a[i];
    int len = 1;
    int end = 0;
    int max = 0;
    for(int i = 0; i < n-1; i++){
        if(a[i] + d == a[i+1]){
            len++;
        }
        else{
            if(len > max){
                max = len;
                end = i;
            } 
            len = 1;
        }
    }
    cout<< max << endl;
    for(int i = end - max+1; i <= end; i++) cout<< a[i] << " ";
}