#include <bits/stdc++.h>
using namespace std;

struct data
{
	int x, y, s;
};

struct cmp
{
	bool operator()(struct data a, struct data b)
	{
		return a.s > b.s;
	}
};

int rx[] = {1, -1, 0, 0};
int ry[] = {0, 0, 1, -1};

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		int a[n + 1][m + 1], check[n + 1][m + 1] = {};
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
				cin >> a[i][j];
		}
		struct data u, v;
		priority_queue<struct data, vector<struct data>, cmp> q;
		q.push({1, 1, a[1][1]});
		while (q.size())
		{
			u = q.top();
			q.pop();
			if (u.x == n && u.y == m)
			{
				cout << u.s << endl;
				break;
			}
			for (int i = 0; i < 4; i++)
			{
				v.x = u.x + rx[i];
				v.y = u.y + ry[i];
				v.s = u.s + a[v.x][v.y];
				if (v.x >= 1 && v.x <= n && v.y >= 1 && v.y <= m && !check[v.x][v.y])
				{
					check[v.x][v.y] = 1;
					q.push(v);
				}
			}
		}
	}
}