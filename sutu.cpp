#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> heights(N);
    for (int i = 0; i < N; ++i) {
        cin >> heights[i];
    }

    vector<int> result(N, 1);

    for (int i = 0; i < N; ++i) {
        for (int j = i - 1; j >= 0; --j) {
            if (heights[j] < heights[i]) {
                result[i] += result[j];
                break;  // Break when finding the first lower mountain
            }
        }
        for (int j = i + 1; j < N; ++j) {
            if (heights[j] < heights[i]) {
                result[i] += result[j];
                break;  // Break when finding the first lower mountain
            }
        }
    }

    for (int i = 0; i < N; ++i) {
        cout << result[i] << " ";
    }

    return 0;
}
