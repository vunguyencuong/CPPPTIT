#include<stdio.h>
int thuannghich(int n){
    int a,b;
    while(n>=10){
        a=n%10; b=(n/10)%10;
        if(a<b) return 0;
        n=n/10;
    }
    return 1;
}
int tim(int a[],int n, int x){
	int i;
    for(i=0;i<n;i++) if(a[i]==x) return i;
    return -1;
}
void sapxep(int a[],int b[],int n){
    int i,j,t;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(b[i]<b[j]){
                t=a[i]; a[i]=a[j]; a[j]=t;
                t=b[i]; b[i]=b[j]; b[j]=t;
            }
}
void in(int a[],int b[],int n){
	int i;
    for(i=0;i<n;i++) printf("%d %d\n",a[i],b[i]);
}
main(){
    int a[10000],b[10000]={0},x,n=0;
    while(scanf("%d",&x)!=-1){
        if(thuannghich(x)){
            int t = tim(a,n,x);
            if(t==-1){
                a[n] = x; b[n] = 1; n++;
            }
            else b[t]++;
        }
    }
    sapxep(a,b,n); in(a,b,n);
}
