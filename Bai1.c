#include<stdio.h>
#include<math.h>
typedef long long ll;

int KN( int n)
{
    int a = n%10;
    int b = n/10;
    if(a != b) return 1;
    else return 0;
}

int NT(ll n)
{
    int i;
    for(i = 2; i*i <= n; i++)
    {
        if(n % i == 0) return 0;
    }
    return 1;
}

int Tn(ll n)
{
    int arr[10000];
    int id = 0;
    while(n)
    {
        arr[id++] = n%10;
        n /= 10;
    }
    int left = 0, right = id - 1;
    while(left <= right)
    {
        if(arr[left] != arr[right]) return 0;
        left++ , right--;
    }
    return 1;
}

int Uocso(ll n)
{
    int count = 0;
    int i;
    for(i = 13; i <= 97; i+= 2)
    {
        if(n % i == 0 && NT(i) == 1 && KN(i) == 1)
        {   
            count++;
        }
    }
    if(count >= 3) return 1;
    return 0;
}

int main()
{
    ll a, b;
    scanf("%lld%lld",&a,&b);
    int i;
    for(i = a; i <= b; i++)
    {
        if(Uocso(i) == 1) 
        {
            printf("%lld ",i);
        }
    }
}