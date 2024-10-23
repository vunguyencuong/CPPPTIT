#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long a[n];
    long long b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        long long cnt=0;
        if(i>0){
            for(int j=i-1;j>=0;j--){
                if(a[i]>a[j]){
                    cnt+=1;
                }
                else{
                    break;
                }
            }
        }
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                cnt+=1;
            }
            else{
                break;
            }
        }
        b[i]=cnt+1;
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }

}