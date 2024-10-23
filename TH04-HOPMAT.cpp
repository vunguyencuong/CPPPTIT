#include<bits/stdc++.h>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define f0(i,n) for(int i=0;i<n;i++)
#define ff(i,b,a) for(int i=b;i>=a;i--)
#define el cout<<'\n'
using namespace std;
typedef long long ll;
const int N=1e6+3;
const int MOD=1e9+7;
int n,a[1005][1005],f[1005],s,b[1005],check = 0;
void ham(int k)
{
    f1(i,n)
    {
        if(a[b[k-1]][i])
        {
            if(k==n+1&&i!=b[1])
           {
                f1(j,n) cout<<b[j]<<' ';
                //cout<<s;
                check = 1;
                cout <<  endl;
                break;
            }
            else if(i==b[1]&&k==n+1)
            {
                 f1(j,n) cout<<b[j]<<' ';
                cout<<s;
                check = 1;
                cout <<  endl;
                break;
            }
             if(!f[i])
            {
                b[k]=i;
                f[i]=1;
                ham(k+1);
                f[i]=0;
            }
        }
    }
}
void xuly()
{
    cin>>n>>s;
    f1(i,n) f1(j,n) cin>>a[i][j];
    b[1]=s;
    f[s]=1;
    ham(2);
    if(check == 0) cout << "No Hamiltonian path";
}
int main()
{
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  int t=1;
  //cin>>t;
  while(t--) xuly();
  return 0;
}