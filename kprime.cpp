#include<bits/stdc++.h>
using namespace std;

vector<bool> check(1e6 + 5, true);
vector<int> primeCount(1e6+5, 0); // Mảng lưu số lượng số nguyên tố tại mỗi vị trí

void SangNt()
{
    check[0] = check[1] = false;
    for (long long i = 2; i <= 1e6; i++)
    {
        if (check[i])
        {
            primeCount[i] = primeCount[i - 1] + 1;
            for (long long j = i * i; j <= 1e6; j += i)
            {
                check[j] = false;
            }
        }
        else
        {
            primeCount[i] = primeCount[i - 1];
        }
    }
}

int main(){
    SangNt();
    int n, k; cin >> n >> k;
    int count = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = i+1; j <= n; j++) {
            int dem = primeCount[j] - primeCount[i - 1];
            if(dem >= k) count++;
        }
    }
    cout << count << endl;
    return 0;
}
