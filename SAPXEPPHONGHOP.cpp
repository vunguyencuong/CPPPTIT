
#include<bits/stdc++.h>
using namespace std;

bool compareMeet(const pair<int,int>&a, const pair<int,int>&b){
	return a.second < b.second;
}

int solve(vector<pair<int,int> >& meets){
	int n = meets.size();
	
	sort(meets.begin(), meets.end(), compareMeet);
	
	int count = 1;
	int end1 = meets[0].second;
	for(int i= 0; i < n; i++){
		// Nếu thời điểm bắt đầu cuộc họp sau hoặc bằng thời điểm kết thúc cuộc họp trước
		if(meets[i].first >= end1){
			count++;
			end1 = meets[i].second;
		}
	}
	return count;
}

int main(){
	int n; cin>> n;
	vector<pair<int,int> > meets(n);
	for(int i = 0; i < n; i++){
		cin>> meets[i].first >> meets[i].second;
	}
	int result = solve(meets);
	cout<< result << endl;
}
