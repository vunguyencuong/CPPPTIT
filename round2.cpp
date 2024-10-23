#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    priority_queue<int, vector<int>, greater<int> > pq;

    for (int i = 0; i < N; ++i) {
        int Ti;
        cin >> Ti;
        pq.push(Ti);
    }
	int crossTime = 0;
    int totalTime = 0;

    while (pq.size() > 1) {
    	crossTime = 0;
        int firstPerson = pq.top();
        pq.pop();
        int secondPerson = pq.top();
        pq.pop();
        if(pq.size() > 0)crossTime = firstPerson + secondPerson;
        else{
			if(firstPerson < secondPerson)
        		crossTime = secondPerson;
        	else crossTime = firstPerson;
		}
        totalTime += crossTime;
		if(firstPerson > secondPerson)
        	pq.push(secondPerson);
        else pq.push(firstPerson);
    }

    cout << totalTime << endl;

    return 0;
}

