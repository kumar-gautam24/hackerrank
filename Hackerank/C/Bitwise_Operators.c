#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int maximum(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

void calculate_the_maximum(int n, int k)
{
    int a[n];
    int and = 0, or = 0, xor = 0;
    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        for (int j = i + 1; j < n; j++)
        {
            temp = a[i] & a[j];
            if (temp < k)
                and = maximum(and, temp);
        }
    }
    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        for (int j = i + 1; j < n; j++)
        {
            temp = a[i] | a[j];
            if (temp < k)
                or = maximum(or, temp);
        }
    }
    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        for (int j = i + 1; j < n; j++)
        {
            temp = a[i] ^ a[j];

            if (temp < k)
                xor = maximum(xor, temp);
        }
    }
    printf("%d\n", and);
    printf("%d\n", or);
    printf("%d\n", xor);
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
