#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char str[1024];
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    scanf("%s", str);
    int len;
    len = strlen(str) + 1;
    for (int i = 0; i < 10; i++)
    {
        a[i] = 0;
    }
    for (int i = 0; i < len; i++)
    {
        int num = str[i] - '0';
        if (num >= 0 && num <= 9)
            a[num]++;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
