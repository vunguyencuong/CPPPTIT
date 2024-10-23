#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<int> > matran(N, vector<int>(N));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matran[i][j];
        }
    }

    int ts[1005] = {0};
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1; j++) {
            int a = matran[i][j];
            int b = matran[i][j + 1];
            int c = matran[i + 1][j];
            int d = matran[i + 1][j + 1];

            if (a == b && b == c && c == d) {
                ts[a]++;
            }
        }
    }

    int maxCount = 0;
    for(int i = 0; i <= 1000; i++){
		maxCount = max(maxCount,ts[i]);
	}
        
    cout << maxCount << endl;

    return 0;
}

