#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Meeting {
    int start, end, payment;
};

bool compareMeetings(const Meeting &a, const Meeting &b) {
    return a.end < b.end;
}

int maxMeetingRevenue(vector<Meeting> &meetings) {
    sort(meetings.begin(), meetings.end(), compareMeetings);

    int n = meetings.size();
    vector<int> dp(n);

    dp[0] = meetings[0].payment;

    for (int i = 1; i < n; ++i) {
        int current_payment = meetings[i].payment;
        int last_compatible = -1;

        for (int j = i - 1; j >= 0; --j) {
            if (meetings[j].end <= meetings[i].start) {
                last_compatible = j;
                break;
            }
        }

        if (last_compatible != -1) {
            current_payment += dp[last_compatible];
        }

        dp[i] = max(dp[i - 1], current_payment);
    }

    return dp[n - 1];
}

int main() {
    int N;
    cin >> N;

    vector<Meeting> meetings(N);
    for (int i = 0; i < N; ++i) {
        cin >> meetings[i].start >> meetings[i].end >> meetings[i].payment;
    }

    int result = maxMeetingRevenue(meetings);

    cout << result << endl;

    return 0;
}
