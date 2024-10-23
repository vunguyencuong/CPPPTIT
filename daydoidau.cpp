#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int max_length = 1;
    int current_length = 1;
    int max_index = 0;
    int current_index = 0;

    for (int i = 1; i < N; ++i) {
        if ((A[i] > 0 && A[i - 1] < 0) || (A[i] < 0 && A[i - 1] > 0)) {
            ++current_length;
        } else {
            if (current_length > max_length) {
                max_length = current_length;
                max_index = current_index;
            }
            current_length = 1;
            current_index = i;
        }
    }

    if (current_length > max_length) {
        max_index = current_index;
    }

    if (max_length > 1) {
        cout << max_length << endl;
        for (int i = max_index; i < max_index + max_length; ++i) {
            cout << A[i] << " ";
        }
    } else {
        cout << "1" << endl;
        cout << A[0] << endl;
    }

    return 0;
}
