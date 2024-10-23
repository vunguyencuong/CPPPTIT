#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int hang = 1;
    for (int i = 1; i <= n; i++)
    {
        char d = 'B';
        char c;
        for (int j = 1; j <= hang; j++)
        {
            if (j == 1 || j == hang)
                printf("@");
            else
            {
                if (d != ('B' + (i - 1) * 2))
                {
                    printf("%c", d);
                    c = d;
                    d += 2;
                }
                else
                {
                    c -= 2;
                    printf("%c", c);
                }
            }
        }
        hang += 2;
        printf("\n");
    }
}