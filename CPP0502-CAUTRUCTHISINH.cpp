#include<bits/stdc++.h>
using namespace std;

struct ThiSinh
{
    string name;
    string date;
    float mot;
    float hai;
    float ba;
    float sum;
};

void nhap(ThiSinh &A)
{
    getline(cin,A.name);
    getline(cin,A.date);
    cin>> A.mot >> A.hai >> A.ba;
    A.sum = A.mot+A.hai+A.ba;
}

void in(ThiSinh A)
{
    cout<< A.name << " " << A.date << " " << fixed << setprecision(1) << A.sum << endl;
}
int main()
{
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}