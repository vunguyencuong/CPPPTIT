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

int main()
{
    SangNt();
    vector<int> numbers;
    string input;
    getline(cin, input);
    istringstream iss(input);
    int number;
    while (iss >> number) {
        numbers.push_back(number); // Thêm số nguyên vào mảng
    }
    int ans = 0;
    for (int i = 1; i < numbers.size() - 1; i++)
    {
        if (numbers[i - 1] > 0 && numbers[i + 1] > 0 && check[numbers[i - 1]] && check[numbers[i + 1]])
            ans = i + 1;
    }
    cout << ans << endl;
}
