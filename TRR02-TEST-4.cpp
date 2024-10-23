#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int> > vt;

class Tree{
	int n, s, a[100][100], visited[100], c;
	public:
		void nhap(){
			cin >> n >> s;
			for(int i = 1; i <= n; i++){
				for(int j = 1; j <= n; j++)
					cin >> a[i][j];
			}
		}
		void Reset(){
			memset(visited, 0, sizeof(visited));
			visited[s] = 1;	
			c = 1;
		}
		int getS(){
			return s;
		}
		int getD(){
			return c;
		}
		int getN(){
			return n;
		}
		void BFS(int u){
			queue<int> q;
			q.push(u);
			while(q.size()){
				int d = q.front();
				q.pop();
				for(int i = 1; i <= n; i++){
					if(!visited[i] && a[d][i]){
						visited[i] = 1;
						q.push(i);
						vt.push_back({i, d});
						c++;
					}
				}
			}
		}
};

int main(){
	
	Tree g;
	g.nhap();
	g.Reset();
	g.BFS(g.getS());
	if(g.getN() == g.getD())
    {
		cout << "Queue BFS tree\n";
		for(int i = 0; i < vt.size(); i++)
        {
			if(vt[i].first > vt[i].second) swap(vt[i].first, vt[i].second);
			cout << vt[i].first << ' ' << vt[i].second << '\n';
		}
	}
	else cout << "No spanning tree";
}