#include<bits/stdc++.h>
using namespace std;

struct data
{
    int value;
    int pos;
    int pos2;
};
bool cmp1( data a, data b)
{
    if(a.value < b.value) return true;
    else return false;
}

bool cmp2 ( data a, data b)
{
    if(a.pos < b.pos) return true;
    else return false;

}
int main()
{
    int n;
    cin>> n;
    vector<data> stu(n);
    for(int i = 0; i < n; i++)
    {
        cin>> stu[i].value;
        stu[i].pos = i;
    }
    sort(stu.begin(),stu.end(),cmp1);
    for(int i = 0; i < n; i++)
    {
        stu[i].pos2 = i;
    }
    sort(stu.begin(),stu.end(),cmp2);
    for(int i = 0; i < n; i++)
    {
        cout<< stu[i].pos2 << " ";
    }

    
}