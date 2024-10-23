#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n; cin>> m >> n;

    int a[1000][1000];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }
    int count = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            int x = a[i][j];
            bool isYenNgua = true;

            for (int k = 0; k < n; ++k) {
                if (a[i][k] < x) {
                    isYenNgua = false;
                    break;
                }
            }
            
            if (isYenNgua) {
                for (int k = 0; k < m; ++k) {
                    if (a[k][j] > x) {
                        isYenNgua = false;
                        break;
                    }
                }
            }
            if (isYenNgua) {
                ++count;
            }
        }
    }
    cout<< count << endl;
}