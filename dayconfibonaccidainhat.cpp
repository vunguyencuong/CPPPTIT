#include<bits/stdc++.h>
using namespace std;

vector<int> fibo(1e6+5,false);

void SangFibo(){
    int f0 = 0;
    int f1 = 1;
    int f2 = 1;
    fibo[0] = true;
    fibo[1] = true;
    while(f1 < 100000){
        f2 = f0 + f1;
        f0 = f1;
        f1 = f2;
        fibo[f2] = true;
    }
}

int main(){

    SangFibo();
    int n; cin>> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin>> a[i];
    int len = 0;
    int max = 0;
     vector<int> currentFibo; // Dãy con Fibonacci hiện tại
    vector<int> maxFibo;     // Dãy con Fibonacci dài nhất đã tìm thấy
    for(int i = 0; i < n; i++){
        if(fibo[a[i]]){
            len++;
            currentFibo.push_back(a[i]);
        } 
        else{
            if(len > max){
                max = len;
                maxFibo = currentFibo;
            } 
            len = 0;
            currentFibo.clear();
        }
    }
    if(len > max){
        max = len;
        maxFibo = currentFibo;
    }
    for(int i = 0; i < maxFibo.size(); i++){
        cout<< maxFibo[i] << " ";
    }
} 