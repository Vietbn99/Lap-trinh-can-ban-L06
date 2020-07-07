/*
    Viết chương trình sửdụng hàm để:
    -Nhập hai ma trận Am*n và Bn*p
    -Tính ma trận Cm*p là tích của hai ma trận A và B
    -In ba ma trận ra màn hình.
*/
#include <stdio.h>

// hàm nhập ma trận
void NhapMaTran(int arr[100][100], int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("a[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
}

// hàm hiển thị ma trận
void InRaManHinh(int arr[100][100], int a, int b)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

// hàm tích 2 ma trận
void Tich(int arr[100][100], int m, int n, int p, int arr1[100][100], int arr2[100][100])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            int sum = 0;
            for (int k = 0; k < n; k++)
            {
                sum += arr1[i][k] * arr2[k][j];
            }
            arr[i][j] = sum;
        }
    }
}
// hàm main
int main()
{
    int arr1[100][100];
    int arr2[100][100];
    int arr3[100][100];
    int m, n, p;
    printf("m,n,p = ");
    scanf("%d%d%d", &m, &n, &p);
    printf("Nhap gia tri cho mtran P:\n");
    NhapMaTran(arr1, m, n);
    printf("Nhap gia tri cho mtran Q:\n");
    NhapMaTran(arr2, n, p);
    Tich(arr3, m, n, p, arr1, arr2);
    printf("\nMa tran P:\n");
    InRaManHinh(arr1, m, n);
    printf("\nMa tran Q:\n");
    InRaManHinh(arr2, n, p);
    printf("\nMa tran P*Q:\n");
    InRaManHinh(arr3, m, p);
}