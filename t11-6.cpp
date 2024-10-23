#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    set<long long> s; 
    long long x;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        s.insert(x);
    }

    vector<long long> numbers(s.begin(), s.end());
    int len = numbers.size();
    // Tìm bộ ba số có giá trị tuyệt đối tổng lớn nhất
    long long sum1 = abs(static_cast<long long>(numbers[0]) + numbers[1] + numbers[2]);
    long long sum2 = abs(static_cast<long long>(numbers[lenn - 3]) + numbers[len - 2] + numbers[len - 1]);


    long long maxSum = 0;
    if(sum1 > sum2) maxSum = sum1;
    else maxSum = sum2;
    cout<< maxSum << endl;
    return 0;
}
