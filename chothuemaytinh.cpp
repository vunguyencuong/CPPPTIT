#include<bits/stdc++.h>
using namespace std;

struct Meeting {
    int origin_index;
    int start, end, payment;
};

bool compareMeetings(const Meeting &a, const Meeting &b) {
    return a.end < b.end;
}

int maxMeetingRevenue(vector<Meeting> &meetings, vector<int> &resultMeetings) {
    sort(meetings.begin(), meetings.end(), compareMeetings);

    int n = meetings.size();
    vector<int> dp(n, 0);
    vector<int> prev(n, -1);  // Dùng để theo dõi cuộc họp trước đó

    dp[0] = meetings[0].payment;

    for (int i = 1; i < n; ++i) {
        int current_payment = meetings[i].payment;
        int last_compatible = -1;

        // Tìm cuộc họp trước đó mà không trùng lịch với cuộc họp hiện tại
        for (int j = i - 1; j >= 0; --j) {
            if (meetings[j].end <= meetings[i].start) {
                last_compatible = j;
                break;
            }
        }

        if (last_compatible != -1) {
            current_payment += dp[last_compatible];
            prev[i] = last_compatible;
        }

        dp[i] = max(dp[i - 1], current_payment);
    }

    // Xây dựng danh sách các cuộc họp được chọn
    int idx = n - 1;
    while (idx >= 0) {
        if (prev[idx] == -1 || dp[idx] != dp[idx - 1]) {
            resultMeetings.push_back(idx);
            idx = prev[idx];
        } else {
            idx--;
        }
    }

    reverse(resultMeetings.begin(), resultMeetings.end());

    return dp[n - 1];
}

int main() {
    int N;
    cin >> N;

    vector<Meeting> meetings(N);
    for (int i = 0; i < N; ++i) {
        meetings[i].origin_index = i;
        cin >> meetings[i].start >> meetings[i].end >> meetings[i].payment;
    }

    vector<int> resultMeetings;
    int result = maxMeetingRevenue(meetings, resultMeetings);

    cout << resultMeetings.size() << " " << result  << endl;

    for (int idx : resultMeetings) {
        cout << meetings[idx].origin_index + 1 << " ";  // In ra chỉ số của cuộc họp được chọn (tăng lên 1 vì chỉ số bắt đầu từ 0)
    }

    return 0;
}