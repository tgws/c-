#include <stdio.h>
int main()
{
    int a, b, sum, jinzhi;
    scanf("%d%d%d", &a, &b, &jinzhi);
    sum = a + b;
    int c[30], num = 0;
    if (sum == 0)
    {
        printf("%d", 0);
    }
    else
    {
        while (sum != 0)
        {
            c[num++] = sum % jinzhi;
            sum /= jinzhi;
        }
        int i;
        for (i = num - 1; i >= 0; i--)
        {
            printf("%d", c[i]);
        }
    }

    return 0;
}