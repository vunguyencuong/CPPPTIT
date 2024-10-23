#include<bits/stdc++.h>
using namespace std;

int ts[1000005] = {0};

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    vector<int> B(n);
    int countZero = 0;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        ts[A[i]]++;
        if(A[i] == 0) countZero ++;
        else B.push_back(A[i]);
    }
    int maxLen = 0;
    int len = 1;
    sort(B.begin(),B.end());
    for(int i = 0; i < B.size()-1;i++){
        if(B[i+1] - B[i] == 1) len++;
        if(B[i+1] - B[i] - 1 <= countZero){
            len += B[i+1] - B[i];
            if(maxLen < len){
                maxLen = len;
                len = 0;
            } 
        }
    }
    cout<< maxLen << endl;
    return 0;
}

