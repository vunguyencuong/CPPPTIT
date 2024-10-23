#include<bits/stdc++.h>
using namespace std;

struct NhanVien 
{
    string name;
    string gioitinh;
    string date;
    string address;
    string mst;
    string hd;
};

void nhap(NhanVien &a)
{
    getline(cin,a.name);
    getline(cin,a.gioitinh);
    getline(cin,a.date);
    getline(cin,a.address);
    getline(cin,a.mst);
    getline(cin,a.hd);
    string res1 = a.date;
    string res2 = a.hd;
    if(res1[1] < '0' || res1[1] > '9') res1 = '0'+res1;
    if(res1[4] < '0' || res1[4] > '9') res1.insert(4,"0");
    while(res1.size() != 10) res1.insert(6,"0");
    a.date = res1;
    if(res2[1] < '0' || res2[1] > '9') res2 = '0'+res2;
    if(res2[4] < '0' || res2[4] > '9') res2.insert(4,"0");
    while(res2.size() != 10) res2.insert(6,"0");
    a.hd = res2;
}

void inds(NhanVien ds[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<< "0000" << i+1 << " " << ds[i].name << " " << ds[i].gioitinh << " " << ds[i].date << " " << ds[i].address << " " << ds[i].mst << " " << ds[i].hd << endl;
    }
}
int main()
{
    struct NhanVien ds[50];
    int N;
    cin>> N;
    cin.ignore();
    for(int i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}

    0312/1900 03/11/1998