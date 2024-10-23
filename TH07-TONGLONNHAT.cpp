#include<bits/stdc++.h>
#define mod				 1000000007
#define ll				 unsigned long long
#define	p(x)			 pair<x,x> 
#define v(x)			 vector<x>
#define tree			 node*
#define faster()		 cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define run()			 int t; cin >> t; while (t--)
using namespace std;


int res;


struct node {
	int data;
	node* pLeft;
	node* pRight;
	node(int x) {
		this->data = x;
		pLeft = pRight = NULL;
	}
};

void Add(tree& T, int u, int v, char c) {
	if (!T) {
		T = new node(u);
		tree p = new node(v);
		if (c == 'L')T->pLeft = p;
		else T->pRight = p;
	}
	else {
		if (T->data == u) {
			tree p = new node(v);
			if (c == 'L')T->pLeft = p;
			else T->pRight = p;
		}
		else {
			if (T->pLeft)Add(T->pLeft, u, v, c);
			if (T->pRight)Add(T->pRight, u, v, c);
		}
	}
}

int Load(tree T) {
	if (!T)return 0;
	int sumLeft = Load(T->pLeft);
	int sumRight = Load(T->pRight);
	if (!T->pLeft && !T->pRight)return T->data;
	if (!T->pLeft)return sumRight + T->data;
	if (!T->pRight)return sumLeft + T->data;
	if (T->pLeft && T->pRight) {
		res = max(res, sumLeft + sumRight + T->data);
		return max(sumLeft, sumRight) + T->data;
	}
}

int main() {
	faster();
	run() {
		int n; cin >> n;
		tree T = NULL;
		while (n--) {
			int u, v;
			char c;
			cin >> u >> v >> c;
			Add(T, u, v, c);
		}
		res = INT_MIN;
		Load(T);
		cout << res << endl;
	}
}
