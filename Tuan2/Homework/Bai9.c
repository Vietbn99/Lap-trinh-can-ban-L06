/*
    Viết chương trình nhập vào một số n sau đó in ra màn hình ma trận xoáy cấp n có dạng như sau:

            Giả sử với n = 4
            1 	2 	3 	4
            12 	13 	14 	5
            11 	16 	15 	6
            10 	9 	8 	7
*/

#include <stdio.h>

int main()
{
    int a[100][10];
    int n;
    printf("MT cap n = ");
    scanf("%d", &n);
    int cap = n - 1;
    int m = 0;
    int num = 1;
    while (num <= (n * n))
    {
        for (int i = m; i <= cap; ++i)
        {
            a[m][i] = num++;
        }
        for (int i = m + 1; i <= cap; ++i)
        {
            a[i][cap] = num++;
        }
        for (int i = cap - 1; i >= m; --i)
        {
            a[cap][i] = num++;
        }
        for (int i = cap - 1; i > m; --i)
        {
            a[i][m] = num++;
        }
        --cap;
        ++m;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}