#include<stdio.h>
#include<math.h>
typedef long long ll;
ll ucln(ll a, ll b)
{
	if(b == 0) return a;
	return ucln(b,a%b);
}
ll bcnn(ll a, ll b)
{
	return a*b/ucln(a,b);
}
/*typedef struct
{
	int a1,b1,a2,b2;	
} data;
*/
int main()
{
	int t;
	scanf("%d",&t);
	int k=1;
	while(t--)
	{
		ll a1,b1,a2,b2;
		scanf("%lld%lld%lld%lld",&a1,&b1,&a2,&b2);
		//printf("%d %d",ucln(b1,b2),bcnn(b1,b2));
		printf("Case #%d:\n",k);
		k++;
		ll x1 = a1/ucln(a1,b1);
		ll y1 = b1/ucln(a1,b1);
		ll x2 = a2/ucln(a2,b2);
		ll y2 = b2/ucln(a2,b2);
		ll m = bcnn(y1,y2);
		ll a3 = x1*(m/y1);
		ll a4 = x2*(m/y2);
		printf("%lld/%lld %lld/%lld\n",a3,m,a4,m);
		ll sum = a3+a4;
		ll n = ucln(sum,m);
		printf("%lld/%lld\n",sum/n,m/n);
		ll p = ucln(a1*b2,a2*b1);
		printf("%lld/%lld\n",(a1*b2)/p,(a2*b1)/p);
		
	}
}
