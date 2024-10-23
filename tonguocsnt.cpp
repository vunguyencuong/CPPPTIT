#include <bits/stdc++.h>
using namespace std;

vector<bool> check(1e6 + 5, true);

void SangNt()
{
    check[0] = check[1] = false;
    for (int i = 2; i * i <= 1e6; i++)
    {
        if (check[i] == true)
        {
            for (int j = i * i; j <= 1e6; j += i)
            {
                check[j] = false;
            }
        }
    }
}
int main(){
    SangNt();
    int n; cin>> n;
    long long sum = 0;
    for(int i = 2; i <= n; i++){
        if(check[i] == true) sum += i;
    }
    cout<< sum << endl;
}