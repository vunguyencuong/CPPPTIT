#include<bits/stdc++.h>
using namespace std;
int const nmax = 1e6+5;
vector<int> ke[nmax];
bool chuaxet[nmax];
int n;

void nhap()
{
    cin>> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            int x; cin>> x;
            if(x) ke[i].push_back(j);
        }
    }
    for(int i = 1; i <= n; i++) chuaxet[i] = true;
}

void DFS(int u)
{
    chuaxet[u] = false;
    for(int i = 0; i < ke[u].size(); i++)
    {
        if(chuaxet[ke[u][i]])
        {
            DFS(ke[u][i]);
        }
    }
}


int main()
{
    nhap();
    int count = 0; // số thành phần liên thông ban đầu
    for(int i = 1; i <= n; i++)
    {
        if(chuaxet[i])
        {
            count++;
            DFS(i);
        }
    }
    //for(int i = 1; i <= n; i++) chuaxet[i] = true;
    for(int i = 1; i <= n; i++)
    {
        for(int i = 1; i <= n; i++) chuaxet[i] = true;
        chuaxet[i] = false;
        int count2 = 0;
        for(int j = 1; j <= n; j++)
        {
            if(chuaxet[j])
            {
                count2++; // số thành phần liên thông mới sau khi bớt đi 1 đỉnh
                DFS(j);
            }
        }
        if(count2 > count) cout<< i << " "; // đỉnh trụ là đỉnh khi bỏ đi thì số tplt tăng lên
    }
    cout<< endl;

}