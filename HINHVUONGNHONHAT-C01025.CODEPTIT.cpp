#include<stdio.h>
#include<math.h>


int main()
{
	int a[4],b[4];
	for(int i = 0; i < 4 ;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i = 0; i < 4 ;i++)
	{
		scanf("%d",&b[i]);
	}
	int ans[4];
	for(int i = 0; i < 2 ;i++)
	{
		if(a[i] < b[i]) ans[i] = a[i];
		else ans[i] = b[i];
	}
	for(int i = 2; i < 4 ;i++)
	{
		if(a[i] > b[i]) ans[i] = a[i];
		else ans[i] = b[i];
	}
	int xsize = abs(ans[0]-ans[2]);
	int ysize = abs(ans[1]-ans[3]);
	if(xsize > ysize) printf("%d",xsize*xsize);
	else printf("%d",ysize*ysize);
}
