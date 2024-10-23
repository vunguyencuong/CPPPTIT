#include<bits/stdc++.h>
using namespace std;
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

void rutgon(PhanSo &t)
{
    ll ucln = __gcd(t.tu_so,t.mau_so);
    t.tu_so /= ucln;
    t.mau_so /= ucln;
}

PhanSo tong(PhanSo p, PhanSo q)
{
    struct PhanSo t;
    t.tu_so = p.tu_so*q.mau_so+p.mau_so*q.tu_so;
    t.mau_so = p.mau_so*q.mau_so;
    rutgon(t);
    return t;
}

void in(PhanSo t)
{
    cout<< t.tu_so << "/" << t.mau_so;
}

int main()
{
    struct PhanSo p,q;
    nhap(p); nhap(q);
    PhanSo t = tong(p,q);
    in(t);
    return 0;
}