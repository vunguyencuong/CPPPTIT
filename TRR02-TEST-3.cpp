#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int> > vt;

class Tree{
	int n, s, a[100][100], visited[100], d;
	public:
		void nhap(){
			cin >> n >> s;
			d = 1;
			for(int i = 1; i <= n; i++){
				for(int j = 1; j <= n; j++)
					cin >> a[i][j];
			}
			memset(visited, 0, sizeof(visited));
			visited[s] = 1;
		}
		void DFS(int u){
			for(int i = 1; i <= n; i++){
				if(!visited[i] && a[u][i]){
					vt.push_back({u, i});
					visited[i] = 1;
					d++;
					DFS(i);
				}
			}
		}
		int getS(){
			return s;
		}
		int getN(){
			return n;
		}
		int getD(){
			return d;
		}
};

int main()
{
	
	Tree g;
	g.nhap();
	g.DFS(g.getS());
	if(g.getN() == g.getD())
    {
		cout << "Stack DFS tree" << '\n';
		for(int i = 0; i < vt.size(); i++)
        {
			if(vt[i].first > vt[i].second) swap(vt[i].first, vt[i].second);
			cout << vt[i].first << ' ' << vt[i].second << '\n';
		} 
	}
	else cout << "No spanning tree";
}