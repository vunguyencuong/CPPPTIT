#include<bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string name;
    string group;
    string date;
    float gpa;
};

void nhap(SinhVien &a)
{
    getline(cin,a.name);
    getline(cin,a.group);
    getline(cin,a.date);
    cin>> a.gpa;
    string res  = a.date;
    if(res[1] < '0' || res[1] > '9') res = '0'+res;
    if(res[4] < '0' || res[4] > '9') res.insert(3,"0");
    while( res.size() != 10) res.insert(6,"0");
    a.date = res;
}

void in(SinhVien a)
{
    cout<< "B20DCCN001" << " " << a.name << " " << a.group << " " << a.date << " " << fixed << setprecision(2) << a.gpa << endl;
}
int main()
{
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}