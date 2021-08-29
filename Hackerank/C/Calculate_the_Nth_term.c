#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c)
{
    int d;
    for (int i = 3; i < n; i++)
    {
        d = a + b + c;
        a = b;
        b = c;
        c = d;
        }
    return d;
}

int main()
{
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("\n%d", ans);
    return 0;
}