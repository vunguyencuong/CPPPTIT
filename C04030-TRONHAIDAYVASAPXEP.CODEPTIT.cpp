#include<stdio.h>
#include<math.h>

void Tang(int a[], int n)
{
	for(int i = 0; i < n-1 ;i++)
	{
		for(int j = i+1; j < n;j++)
		{
			if(a[i] > a[j])
			{
				int tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

void Giam(int b[],int n)
{
	for(int i = 0; i < n-1;i++)
	{
		for(int j = i+1; j < n;j++)
		{
			if(b[i] < b[j])
			{
				int tmp = b[i];
				b[i] = b[j];
				b[j] = tmp;
			}
		}
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	int index = 1;
	while(t--)
	{
		int a[1000]={};
		int b[1000]={};
		int n;
		scanf("%d",&n);
		for(int i = 0 ;i < n ;i++)
		{
			scanf("%d",&a[i]);
		}
		for(int i = 0; i < n;i++)
		{
			scanf("%d",&b[i]);
		}
		Tang(a,n);
		Giam(b,n);
		/*for(int i = 0; i < n;i++)
		{
			printf("%d ",a[i]);
		}
		printf("\n");
		for(int i = 0; i < n ;i++)
		{
			printf("%d ",b[i]);
		}
		*/
		int p = 0, m = 0;
		printf("Test %d\n",index);
		index++;
		for(int i = 0; i < 2*n;i++)
		{
			if(i % 2 == 0)
			{
				printf("%d ",a[p]);
				p++;
			}
			else
			{
				if(i == 2*n-1) printf("%d",b[m]);
				else printf("%d ",b[m]);
				m++;
			}
		}
		printf("\n");
	}
}
