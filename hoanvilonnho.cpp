#include<bits/stdc++.h>
using namespace std;

int main() {
    string X;
    cin >> X;
    
    string res = X;
    sort(res.begin(), res.end());
    while(res <= X){
        if(!next_permutation(res.begin(),res.end())) break;
    }
    if (X < res) cout<< res << endl;
    else cout <<  0 << endl;

    
    return 0;
}
