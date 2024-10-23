#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
struct PhanSo
{
    ll tu_so;
    ll mau_so;
};

void nhap(PhanSo &p)
{
    cin>> p.tu_so >> p.mau_so;
}

void rutgon(PhanSo &p)
{
    ll ucln = __gcd(p.tu_so,p.mau_so);
    p.tu_so /= ucln;
    p.mau_so /= ucln;
}

void in(PhanSo p)
{
    cout<< p.tu_so << "/" << p.mau_so;
}

int main()
{
    struct PhanSo p;
    nhap(p);
    rutgon(p);
    in(p);
    return  0;
}