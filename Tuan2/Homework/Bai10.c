/*
    Đề ở file
*/
// khai báo thư viện
#include <stdio.h>
#include <math.h>

// tọa hàm nhập 2 đa thức
void NhapDaThuc(int arr[100], int n)
{
    printf("He so cua da thuc lan luot tu t0:\n");
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

// hàm in ra màn hình
void InRaManHinh(int arr[100], int n, int x)
{
    for (int i = 0; i <= n; i++)
        if (i == 0)
        {
            printf("%d ", arr[i]);
        }
        else if (i == 1)
        {
            if (arr[i] < 0)
            {
                printf("+ (%d)*%d ", arr[i], x);
            }
            else if (arr[i] == 0)
                break;
            else
                printf("+ %d*%d ", arr[i], x);
        }
        else
        {
            if (arr[i] < 0)
            {
                printf("+ (%d)*%d^%d ", arr[i], x, i);
            }
            else if (arr[i] == 0)
                break;
            else
                printf("+ %d*%d^%d ", arr[i], x, i);
        }
}

// hàm trả về tổng của 2 đa thức
void Tong2dathuc(int arr2[100], int arr[100], int arr1[100], int n, int m)
{
    if (m == n)
    {
        for (int i = 0; i <= n; i++)
        {
            arr2[i] = arr[i] + arr1[i];
        }
    }
    else if (m > n)
    {
        for (int i = 0; i <= n; i++)
        {
            arr2[i] = arr[i] + arr1[i];
        }
        for (int i = n + 1; i <= m; i++)
        {
            arr2[i] = arr1[i];
        }
    }
    else
    {
        for (int i = 0; i <= m; i++)
        {
            arr2[i] = arr[i] + arr1[i];
        }
        for (int i = m + 1; i <= n; i++)
        {
            arr2[i] = arr[i];
        }
    }
}

// hàm chính
int main()
{
    int P[100], Q[100], T[100];
    int m, n, x;
    printf("n and m = ");
    scanf("%d%d", &n, &m);
    printf("Da thuc P: ");
    NhapDaThuc(P, n);
    printf("Da thuc Q: ");
    NhapDaThuc(Q, m);
    printf("x = ");
    scanf("%d", &x);
    printf("\nP = ");
    InRaManHinh(P, n, x);
    printf("\nQ = ");
    InRaManHinh(Q, m, x);
    Tong2dathuc(T, P, Q, n, m);
    int max = (n > m) ? n : m;
    printf("\nT = P + Q = ");
    InRaManHinh(T, max, x);
}