#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t;
    while(t--){
        int n; cin>> n;
        vector<int> a(n);
        for(int i=  0; i < n; i++) cin>> a[i];
        sort(a.begin(),a.end());

        int minDistance = INT_MAX;
        for(int i = 1; i < n; i++){
            minDistance = min(minDistance,a[i]-a[i-1]);
        }

        int countPair = 0;
        map<int,int> distancePair;
        for(int i = 1;i < n; i++){
            int distance = a[i] - a[i-1];
            if(distance == minDistance){
                countPair++;
                distancePair[distance]++;
            }
        }
        cout<< minDistance << " " << distancePair[minDistance] << endl;
    }
}