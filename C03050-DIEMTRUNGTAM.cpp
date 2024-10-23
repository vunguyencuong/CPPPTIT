#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[100000+3], ts[100000+3] = {};
    for (int i = 0; i < n - 1; i++)
    {
        int x;
        scanf("%d%d", &x, &a[i]);
        ts[a[i]]++;
    }
    int check = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (ts[a[i]] != 1)
        {
            check = 0;
            break;
        }
    }
    if (check)
        printf("Yes");
    else
        printf("No");
}