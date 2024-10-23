#include <iostream>
#include <vector>

using namespace std;
vector<int> ledCountPerDigit = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6}; // Số lượng LED tương ứng với các chữ số từ 0 đến 9
// Hàm kiểm tra xem một số có thể biểu diễn bằng số lượng LED cho trước không
int isValid(int number, vector<int> ledCount) {
    int count = 0;
    if(number <= 9) return ledCount[0] + ledCount[number];
    else{
        while (number > 0) {
        count += ledCount[number % 10];
        number /= 10;
    }
    }
    return count;
}

int main() {
    int ledCount;
    cin >> ledCount;

    if (ledCount < 8 || ledCount > 23) {
        cout << "Impossible" << endl;
    } else {
       
        for (int h = 0; h < 24; ++h) {
            for (int m = 0; m < 60; ++m) {
                if (isValid(h, ledCountPerDigit) + isValid(m, ledCountPerDigit) == ledCount) {
                    // Nếu tổng số LED cần cho giờ và phút bằng số lượng vạch LED đã cho trước
                    cout << (h < 10 ? "0" : "") << h << ":" << (m < 10 ? "0" : "") << m  << endl;
                }
            }
        }
    }
    return 0;
}
