#include <bits/stdc++.h>
using namespace std;

struct point
{
	int x, y, z, s;
};

int gx[6] = {1, -1, 0, 0, 0, 0};
int gy[6] = {0, 0, 1, -1, 0, 0};
int gz[6] = {0, 0, 0, 0, 1, -1};

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int h, r, d, ok = -1;
		cin >> h >> r >> d;
		point st, ed, b, c;
		char a[h + 1][r + 1][d + 1];
		queue<point> q;
		for (int i = 1; i <= h; i++)
		{
			cin.ignore();
			for (int j = 1; j <= r; j++)
			{
				for (int k = 1; k <= d; k++)
				{
					cin >> a[i][j][k];
					if (a[i][j][k] == 'S')
					{
						st.x = i;
						st.y = j;
						st.z = k;
						st.s = 0;
						a[i][j][k] = '#';
					}
					else if (a[i][j][k] == 'E')
					{
						ed.x = i;
						ed.y = j;
						ed.z = k;
					}
				}
			}
		}
		q.push(st);
		while (q.size())
		{
			b = q.front();
			q.pop();
			c = b;
			c.s++;
			if (b.x == ed.x && b.y == ed.y && b.z == ed.z)
			{
				ok = b.s;
				break;
			}
			for (int i = 0; i < 6; i++)
			{
				c.x += gx[i];
				c.y += gy[i];
				c.z += gz[i];
				if (c.x >= 1 && c.x <= h && c.y >= 1 && c.y <= r && c.z >= 1 && c.z <= d && a[c.x][c.y][c.z] != '#')
				{
					q.push(c);
					a[c.x][c.y][c.z] = '#';
				}
				c.x -= gx[i];
				c.y -= gy[i];
				c.z -= gz[i];
			}
		}
		cout << ok << endl;
	}
}