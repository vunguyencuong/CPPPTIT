#include<bits/stdc++.h>
using namespace std;

void solve(int n, char a, char b, char c)
{
    if(n == 1)
    {
        cout<< a << " -> " << c << endl;
        return;
    }
    solve(n-1,a,c,b);   // lấy cột C làm trung gian để chuyển n-1 đĩa từ cột A sang cột B
    solve(1,a,b,c); // chuyển đĩa lớn nhất sang cột C
    solve(n-1,b,a,c); // lấy cột A làm trung gian để chuyển n-1 đĩa từ cột B sang cột C
}

int main()
{
    int n; cin>> n;
    char a = 'A', b = 'B', c = 'C';
    solve(n,a,b,c);
}