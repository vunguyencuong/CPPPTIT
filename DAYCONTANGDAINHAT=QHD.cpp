#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
long const nmax = 1e3+5;
long n;
long a[nmax];
long l[nmax];  // lưu độ dài lớn nhất tại các thời điểm
void solve()
{
    for(long i = 1; i <= n; i++) cin>> a[i];
    long lmax = 0;; // biến lưu chiều dài lớn nhất khả quan tới thời điểm đó
    for(long i = 1; i <= n; i++)
    {
        l[i] = 1;
        for(long j = 1; j < i; j++) 
        {
            if(a[i] > a[j])
            {
                l[i] = max(l[i],l[j]+1);
            }
        }
        lmax = max(lmax,l[i]);
    }
    cout<< lmax << endl;
    // long Max = lmax+1;
    // vector<long> Line;
    // for(long i = n; i >= 1; i--)
    // {
    //     if(l[i] + 1 == Max)
    //     {
    //         Max--;
    //         Line.push_back(a[i]);
    //     }
    // }
    // for(long i = Line.size()-1; i >= 0; i--) cout<< Line[i] << " ";
    // cout<< endl;
}
/*void trace()
{
   long u = 
}
*/
long main()
{
    faster();
    cin>> n;
    solve();
    //trace();
}