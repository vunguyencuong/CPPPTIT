#include<iostream>
#include<string>
using namespace std;
void nhap ( int x,int y,int z[10][10] ) {
    
    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
            cin>>z[i][j];
        }
    }
}
void in(int x,int y,int z[10][10]){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
            cout<<z[i][j]<<" ";   
        }
        cout<<endl;
    }
}
int main (){
    int m,n;
    cin>>m>>n;
    int a[10][10];
    nhap(m,n,a);
    cout<<"-------"<<endl;
    in(m,n,a);
    int p,q;
    cin>>p>>q;
    int b[10][10];
    nhap(p,q,b);
    cout<<"-------"<<endl;
    in(p,q,b);
    int c[10][10];
    int d,e;
    if(n!=p){
        cout<<"deo tinh duoc";
    }else{
        for(int i=1;i<=m;i++){
            for(int j=1;j<=q;j++){
                c[i][j]=0;
                for(int k=1;k<=n;k++){
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        d=m;
        e=q;
        in(d,e,c);
    }
}