#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    int sum=0;
    int f[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        f[i]=0;
        if(i>=k){
            for(int j=0;j<k;j++){
                f[i]+=a[i-j];
            }
        }
        else{
            f[i]=-1;
        }
        // cout<<f[i]<<" ";
    }
    cout<<endl;
    int max=9999999;
    for(int i=0;i<n;i++){
        for(int j=i+k;j<n;j++){
                if(max>abs(f[i]-f[j])){
                    max=abs(f[i]-f[j]);
                }
            }
    }
    cout<<max;
}