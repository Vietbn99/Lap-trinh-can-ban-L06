/*
    Xây dựng chương  trình C thực hiện các yêu cầu sau:
    Hàm main() thực hiện các công việc sau:
    1.Chọn 1 để nhập ma trận vuông cấp n
    2.Chọn 2 để in các phần tử trên đường chéo chính
    3.Chọn 3 để tìm phần tửlớn nhất của ma trận
    4.Chọn 4 để tìm phần tửnhỏnhất của ma trận
    5.Chọn 5 để sắp xếp các phần tử tăng dần theo hàng
    6.Chọn 6 để sắp xếp các phần tử tăng dần theo cột
    7.Chọn 7 để tìm phần tửlớn nhất thứ 2 trong ma trận
    8.Chọn 8 để tính tổngcác số nguyên tố trong ma trận 
    Khi người dùng chọn 2 thì chương trình in các phần tử trên đường  chéo  chính theo dạng như sau (giả sử ma trận 3x3)1***10***9
    Khi người dùng chọn sốkhác: thông báo chọn không hợp lệ, yêu cầu xóa màn hình và hiển thị lại menu trên.
  (Lệnh  xóa  màn  hình  là system("cls").  Khi  dùng phải khai báo thư viện windows.h).
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

void maxmatran(int a[100][100], int n)
{
    int num = a[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (num < a[i][j])
            {
                num = a[i][j];
            }
        }
    }
    printf("PT lon nhat trong ma tran: %d\n", num);
}

void minmatran(int a[100][100], int n)
{
    int num;
    num = a[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (num > a[i][j])
            {
                num = a[i][j];
            }
        }
    }
    printf("PT nho nhat trong ma tran: %d\n", num);
}

void hienthimatran(int a[100][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

void maxthu2(int a[100][100], int n)
{
    int max1 = a[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (max1 < a[i][j])
            {
                max1 = a[i][j];
            }
        }
    }
    int max2 = a[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (max2 < a[i][j] && a[i][j] < max1)
            {
                max2 = a[i][j];
            }
        }
    }
    printf("Phan tu lon thu 2 la: %d\n", max2);
}

void tongsonguyento(int a[100][100], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
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
    printf("Tong cac so nguyen to co trong ma tran la: %d\n", sum);
}

int main()
{
here:
    printf("                 MENU\n");
    printf("    1. Nhap ma tran vuong cap n\n");
    printf("    2. In ra man hinh cac pt tren duong cheo chinh\n");
    printf("    3. Tim phan tu lon nhat cua ma tran\n");
    printf("    4. Tim phan tu nho nhat cua ma tran\n");
    printf("    5. Sap xep cac phan tu tang dan theo hang\n");
    printf("    6. Sap xep cac phan tu tang dan theo cot\n");
    printf("    7. Tim phan tu lon nhat thu 2 trong ma tran\n");
    printf("    8. Tinh tong cac so nguyen to trong ma tran\n");
    printf("    9. Thoat\n");
    int choose;
    printf("Moi ban chon chuc nang: ");
    scanf("%d", &choose);
    int a[100][100], n;
    switch (choose)
    {
    case 1:
        printf("Ma tra ban muon nhap cap gi? ");
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("a[%d][%d] = ", i + 1, j + 1);
                scanf("%d", &a[i][j]);
            }
        }
        goto come;
    case 2:
        printf("Cac phan tu tren duong cheo chinh:\n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    printf("%d\t", a[i][j]);
                }
                else
                {
                    printf("*\t");
                }
            }
            printf("\n");
        }
        goto come;
    case 3:
        maxmatran(a, n);
        goto come;
    case 4:
        minmatran(a, n);
        goto come;
    case 5:
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (a[i][j] > a[i][k])
                    {
                        int temp = a[i][j];
                        a[i][j] = a[i][k];
                        a[i][k] = temp;
                    }
                }
            }
        }
        hienthimatran(a, n);
        goto come;
    case 6:
        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < n; i++)
            {
                for (int k = i + 1; k < n; k++)
                {
                    if (a[i][j] > a[k][j])
                    {
                        int temp = a[i][j];
                        a[i][j] = a[k][j];
                        a[k][j] = temp;
                    }
                }
            }
        }
        hienthimatran(a, n);
        goto come;

    case 7:
        maxthu2(a, n);
        goto come;
    case 8:
        tongsonguyento(a, n);
        goto come;
    case 9:
        return 0;
    default:
        printf("Chuc nang khong hop le!...\n");
    come:
        printf("Moi ban nhap phim bat ky de xoa man hinh\n");
        getch();
        system("cls");
        goto here;
    }
}