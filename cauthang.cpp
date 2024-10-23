#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;

int main(){
    int t; cin>> t;
    while(t--){
        int n,k; cin>> n >> k;
        vector<int> dp(n+1,0);
        dp[0] = 1;
        for(int i = 1;i <= n; i++){
            for(int j = 1; j <= k; j++){
                if(i-j >= 0){
                    dp[i] = (dp[i] + dp[i-j]) % MOD;
                }
            }
        }
        cout<< dp[n] << endl;
    }
}

// Khởi tạo dp[0] = 1 vì có một cách để đứng ở bậc 0 (không di chuyển).
// Dùng vòng lặp để tính số cách đến từng bậc tiếp theo, bắt đầu từ bậc 1 đến bậc n.
//Tại mỗi bậc i, duyệt qua tất cả các bước di chuyển từ 1 đến k, và cập nhật dp[i] bằng cách thêm số cách từ bậc i - j.