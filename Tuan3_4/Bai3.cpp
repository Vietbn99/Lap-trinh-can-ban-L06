/*
    Xây dựng chương trình C quản lý như sau:
    Mã sách: Kiểu số nguyên
    Tên sách: Kiểu mảng ký tự. Tối đa 100 ký tự
    Tác giả: Kiểu mảng ký tự. Tối đa 100 ký tự
    MaNXB: Lưu mã số nhà xuất bản, kiểu int
    Hàm main() thực hiện các công việc sau:
    1. Chọn 1 để tạo danh mục sách
    2. Chọn 2 để Hiển thị danh sách tất cả các sách
    3. Chọn 3 để hiển thị sách của cùng một nhà xuất bản
    4. Chọn 4 để tìm kiếm thông tin sách theo mã sách
    5. Chọn 5 để Sắp xếp các quyển sách theo chiều tăng của mã sách
    6. Chọn 6 để Thoát khỏi chương trình
    Nếu chọn số khác: Thông báo chọn không hợp lệ, xóa màn hình và hiển thị menu
*/
#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <conio.h>

typedef struct Sach
{
    int masach;
    char tensach[100];
    char tacgia[100];
    int maNXB;
} sach;

void menu()
{
    printf("                MENU\n");
    printf("    1. Tao danh muc sach\n");
    printf("    2. Hien thi danh sach tat ca cac sach\n");
    printf("    3. Hien thi cac sach cung mot nha san xuat\n");
    printf("    4. Tim kiem thong tin sach theo ma sach\n");
    printf("    5. Sap xep cac quyen sach theo chieu tang gan cua ma sach\n");
    printf("    6. Thoat chuong trinh\n");
}

void taosach(sach &a)
{
    printf("Ma sach: ");
    scanf("%d", &a.masach);
    printf("Ten sach: ");
    fflush(stdin);
    gets(a.tensach);
    printf("Tac gia: ");
    fflush(stdin);
    gets(a.tacgia);
    printf("Ma Nha Xuat Ban: ");
    scanf("%d", &a.maNXB);
}

void taods(sach a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap thong tin sach thu %d\n", i + 1);
        taosach(a[i]);
    }
}

void hienthi(sach a[], int n)
{
    printf("Ma sach     Ten sach                            Tac gia                 Ma Nha Xuat Ban\n");
    for (int i = 0; i < n; i++)
    {
        printf("%-12d%-35s%-25s%d\n", a[i].masach, a[i].tensach, a[i].tacgia, a[i].maNXB);
    }
}

void hienthicungnhaxb(sach a[], int n)
{
    sach b[100];
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[i].maNXB < b[j].maNXB)
            {
                sach temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if ((a[i].maNXB != a[i - 1].maNXB) && i >= 1)
            printf("\n");
        printf("%-12d%-35s%-25s%d\n", a[i].masach, a[i].tensach, a[i].tacgia, a[i].maNXB);
    }
}

void timkiem(sach a[], int n)
{
    int temp;
    printf("Nhap ma sach can tim thong tin: ");
    scanf("%d", &temp);
    for (int i = 0; i < n; i++)
    {
        if (temp == a[i].masach)
        {
            printf("%-12d%-35s%-25s%d\n", a[i].masach, a[i].tensach, a[i].tacgia, a[i].maNXB);
        }
    }
}

void sapxep(sach a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i].masach > a[j].masach)
            {
                int temp = a[i].masach;
                a[i].masach = a[j].masach;
                a[j].masach = temp;
            }
        }
    }
    hienthi(a, n);
}

int main()
{
    sach a[100];
    int n;
    bool danhap = false;
    int choose;
here:
    menu();
    printf("Moi ban chon chuc nang: ");
    scanf("%d", &choose);
    switch (choose)
    {
    case 1:
        printf("Ban muon nhap bao nhieu quyen sach: ");
        scanf("%d", &n);
        taods(a, n);
        danhap = true;
        goto back;
    case 2:
        if (danhap)
        {
            hienthi(a, n);
        }
        else
        {
            printf("Ban chua nhap thong tin danh sach!!!\n");
        }
        goto back;
    case 3:
        if (danhap)
        {
            hienthicungnhaxb(a, n);
        }
        else
        {
            printf("Ban chua nhap thong tin danh sach!!!\n");
        }
        goto back;
    case 4:
        if (danhap)
        {
            timkiem(a, n);
        }
        else
        {
            printf("Ban chua nhap thong tin danh sach!!!\n");
        }
        goto back;
    case 5:
        if (danhap)
        {
            sapxep(a, n);
        }
        else
        {
            printf("Ban chua nhap thong tin danh sach!!!\n");
        }
        goto back;
    case 6:
        break;
    default:
        printf("Chuc nang khong hop le!!!\n");
    back:
        printf("Nhap phim bat ky de xoa man hinh.\n");
        getch();
        system("cls");
        goto here;
    }
}