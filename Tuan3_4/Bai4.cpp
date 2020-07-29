#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void menu()
{
    printf("            MENU\n");
    printf("    1. Chon 1 de tinh tong ham (x-5)*(x-5) voi x tu 1 den n\n");
    printf("    2. Chon 2 de tinh tong ham cos(x)^2 voi x tu 1 den n\n");
    printf("    3. Chon 3 de tinh tong ham sin(x)^2 voi x tu 1 den n\n");
    printf("    4. Thoat chuong trinh\n");
}

void ct1()
{
    float sum = 0;
    int n;
    printf("Nhap n = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += pow(abs(i - 5), 2);
    }
    printf("S = %f\n", sum);
}

void ct2()
{
    float sum = 0;
    int n;
    printf("Nhap n = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += pow(cos(i), 2);
    }
    printf("S = %f\n", sum);
}

void ct3()
{
    float sum = 0;
    int n;
    printf("Nhap n = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += pow(sin(i), 2);
    }
    printf("S = %f\n", sum);
}

int main()
{
    int choose;
here:
    menu();
    printf("Nhap chuc nang: ");
    scanf("%d", &choose);
    switch (choose)
    {
    case 1:
        ct1();
        goto back;
    case 2:
        ct2();
        goto back;
    case 3:
        ct3();
        goto back;
    case 4:
        break;
    default:
        printf("Khong hop le!!\n");
    back:
        printf("Nhap phim bat ky de xoa man hinh");
        getch();
        system("cls");
        goto here;
    }
}