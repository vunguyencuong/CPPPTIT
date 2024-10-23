#include<bits/stdc++.h>
using namespace std;

double calculateSum(int n, double q) {
    double sum = 0;
    for (int i = 0; i <= n; ++i) {
        sum += pow(-1, i) * pow(q, i);
    }
    return sum;
}

int main(){
    int n, q;
    cin>> n >> q;
    cout<< calculateSum(n,q) << endl;
}