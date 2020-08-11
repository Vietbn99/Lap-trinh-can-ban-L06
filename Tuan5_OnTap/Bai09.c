/*
    Câu 9:Viết chương trình nhập vào ma trận thực Anxm. 
    Sau đó tìm giá trị lớn nhất, giá trị nhỏ nhất của ma trận này. 
    In ma trận cùng kết quả tìm được ra màn hình.
    Tính tổng các số nguyên tố trong ma trận.
*/

#include <stdio.h>

void nhap(int a[100][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("a[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
}

void hienthi(int a[100][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

int maxmatran(int a[100][100], int n, int m)
{
    int max = a[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (max < a[i][j])
            {
                max = a[i][j];
            }
        }
    }
    return max;
}

int minmatran(int a[100][100], int n, int m)
{
    int min = a[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (min > a[i][j])
            {
                min = a[i][j];
            }
        }
    }
    return min;
}

int sumsonguyento(int a[100][100], int n, int m)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int count = 0;
            for (int k = 1; k <= a[i][j]; k++)
            {
                if (a[i][j] % k == 0)
                {
                    ++count;
                }
            }
            if (count == 2)
            {
                sum += a[i][j];
            }
        }
    }
    return sum;
}

int main()
{
    int a[100][100], n, m;
    printf("n = ");
    scanf("%d", &n);
    printf("m = ");
    scanf("%d", &m);
    nhap(a, n, m);
    hienthi(a, n, m);
    printf("MAX = %d\n", maxmatran(a, n, m));
    printf("MIN = %d\n", minmatran(a, n, m));
    printf("SUM cac so nguyen to = %d\n", sumsonguyento(a, n, m));
    return 0;
}