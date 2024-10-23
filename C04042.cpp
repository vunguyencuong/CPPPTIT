#include<stdio.h>
#include<math.h>

struct data
{
    int num;
    int tanso;
};

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[100005];
        for(int i = 0; i< n; i++)
        {
            scanf("%d",&a[i]);
        }
        struct data A[100005];
        int id = 0;
        for(int i = 0; i < n; i++)
        {
            int check = 0;
            for(int j = 0; j < id; j++)
            {
                if(a[i] == A[j].num)
                {
                    check = 1;
                    A[j].tanso++;
                    break;
                }
            }
            if(check == 0)
            {
                A[id].num = a[i];
                A[id].tanso = 1;
                id++;
            }
        }
        int count = 0;
        for(int i = 0; i < id; i++)
        {
            if(A[i].tanso == 1) count++;
        }
        //printf("%d\n",count);
        if(count == id) printf("NO\n");
        else
        {
            for(int i = 0; i < id; i++)
            {
                if(A[i].tanso != 1)
                {
                    printf("%d\n",A[i].num);
                    break;
                }
            }
        }
        
    }
}