#include<bits/stdc++.h>
using namespace std;
// de hieu hon day la bai tim cac so trong khoang a va b co so uoc nguyen to la snt
vector<int> numOfDivisor(1e6+5, 1); //numOfDivisor[i] la so luong uoc cua so i
vector<int> numOfCrystal(1e6+5, 0); //numOfCrystal[i] so luong so thoa man tinh tu 1 den i

void findNumOfDivisor(){ //Ham xay dung mang numOnDivisor
    for (int i = 2; i <= 1e6; i++)
    {
        for (int j = i; j <= 1e6; j += i) numOfDivisor[j]++; 
    }
}

void findCrystal(){
    for (int i = 1; i <= 1e6; i++)
    {
        numOfCrystal[i] = numOfCrystal[i-1];
        int so_uoc_cua_i = numOfDivisor[i];
        if (numOfDivisor[so_uoc_cua_i] == 2)
            numOfCrystal[i]++;
    }
}
int main(){
    findNumOfDivisor();
    findCrystal();
    int t;
    cin >> t;
    while (t--){
        int a, b;
        cin >> a >> b; 
        cout << numOfCrystal[b] - numOfCrystal[a-1]<<endl;
    }
}