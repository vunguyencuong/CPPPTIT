#include<bits/stdc++.h>
using namespace std;


bool compareRectangles(const vector<int>&a, const vector<int>& b){
    if(a[0] != b[0]){
        return a[0] < b[0]; // Sắp xếp theo chiều rộng tăng dần
    }
    return a[1] < b[1]; // Nếu chiều rộng bằng nhau, sắp xếp theo chiều cao giảm dần
}


int main(){
    int n; cin>> n;

    vector<vector<int> > hcn(n,vector<int>(3));

    for(int i = 0; i < n; i++){
        cin>> hcn[i][0] >> hcn[i][1];
        hcn[i][2] = i+1; // chỉ số của hcn
    }

    sort(hcn.begin(), hcn.end(), compareRectangles);
    for (int i = 0; i < hcn.size(); i++) {
        cout << hcn[i][0] << " " << hcn[i][1] << endl;
    }
}
