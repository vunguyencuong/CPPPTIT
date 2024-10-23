#include<bits/stdc++.h>
using namespace std;

int main(){
    string n; cin>> n;

    int sum = 0;
    int check = 0;
    for(int i = 0; i < n.size(); i++){
        if(n[i] == '0') check = 1;
        sum += n[i] - '0';
    }

    if(sum%3 != 0 || check == 0){
        cout<< -1 << endl;
    } else{
        sort(n.begin(),n.end(),greater<char>());
        cout<< n << endl;
    }
    
}