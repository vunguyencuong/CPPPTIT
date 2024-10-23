#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a <= b)
    {
        int n = 'A';
        for (int i = 1; i <= a; i++)
        {
            char d = n - 2 + b;
            int dem = 0;
            for (char j = n + i - 2; j <= d; j++)
            {
                printf("%c", j);
                dem++;
            }
            for (int j = dem; j < b; j++)
                printf("%c", d);
            printf("\n");
        }
    }
    else
    {
        int n = 'A';
        for (int i = 1; i < b; i++)
        {
            char d = n - 2 + b;
            int dem = 0;
            for (char j = n + i - 2; j <= d; j++)
            {
                printf("%c", j);
                dem++;
            }
            for (int j = dem; j < b; j++)
                printf("%c", d);
            printf("\n");
        }
        for (int i = b; i <= a; i++)
        {
            for (int i = 1; i <= b; i++)
                printf("%c", n - 2 + b);
            printf("\n");
        }
    }
}
