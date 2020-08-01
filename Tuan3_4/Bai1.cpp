/*
    Xây dựng chương  trình C quản lý sinh viên bằng mảng như sau:
    Cấu trúc sinh viên gồm các trường:
    -Masv: Mã sinh viên -kiểu chuỗi có tối đa 3 ký tự
    -Hoten: Họtên –Kiểu mảng ký tự
    -Tuoi: Tuổi –Kiểu số
    -Lop: Lớp –Kiểu mảng ký tự
    Thực hiện các chức năng theo menu:
    1.Chọn 1 để nhập danh sách sinh viên
    2.Chọn 2 để hiển thị danh sách sinh viên
    3.Chọn 3 để tìm kiếm sinh viên theo tên
    4.Chọn 4 để sắp xếp danh sách sinh viên theo chiều tăng dần của mã sinh viên
    5.Chọn 5 để tìm kiếm sinh viên theo mã sinh viên
    6.Chọn 6 để kết thúc
    Câu hỏi *:Cải tiến chương trình tối ưu bộ nhớ bằng cách sử dụng danh sách liên kết đơn.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#include <windows.h>
typedef struct Sinhvien
{
    char masv[10];
    char Hoten[20];
    int tuoi;
    char lop[10];
} SV;

// hàm hiển thị menu
void hienthimenu()
{
    printf("\t\t\tMENU\n");
    printf("\t1. Nhap danh sach sinh vien\n");
    printf("\t2. Hien thi danh sach sinh vien\n");
    printf("\t3. Tim kiem sinh vien theo ten\n");
    printf("\t4. Sap xep danh sach theo chieu tang dan cua ma sinh vien\n");
    printf("\t5. Tim kiem sinh vien theo ma sinh vien\n");
    printf("\t6. Thoat chuong trinh\n");
}

void nhapsv(SV &a)
{
    printf("Ma sinh vien: ");
    fflush(stdin);
    gets(a.masv);
    printf("Ho va ten: ");
    fflush(stdin);
    gets(a.Hoten);
    printf("Tuoi: ");
    scanf("%d", &a.tuoi);
    printf("Lop: ");
    fflush(stdin);
    gets(a.lop);
}

void hienthi(SV a)
{
    printf("%-15s%-25s%-8d%s\n", a.masv, a.Hoten, a.tuoi, a.lop);
}

void timkiemten(SV a[], int n)
{
    char tentimkiem[20];
    printf("Nhap ten tim kiem: ");
    fflush(stdin);
    gets(tentimkiem);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        if (strcmp(a[i].Hoten, tentimkiem) == 0)
        {
            hienthi(a[i]);
        }
    }
}

void sapxep(SV a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(a[i].masv, a[j].masv) > 0)
            {
                SV temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void timkiemmasv(SV a[], int n)
{
    char matimkiem[10];
    printf("Nhap masv tim kiem: ");
    fflush(stdin);
    gets(matimkiem);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        if (strcmp(a[i].masv, matimkiem) == 0)
        {
            hienthi(a[i]);
        }
    }
}

int main()
{
    SV a[100];
    int n;
    int choose;
    bool daNhap = false;
here:
    hienthimenu();
    do
    {
        printf("Moi ban chon chuc nang: ");
        scanf("%d", &choose);
    } while (choose <= 0 && choose > 6);
    switch (choose)
    {
    case 1:
    baby:
        daNhap = true;
        printf("Danh sach gom bao nhieu sinh vien: ");
        scanf("%d", &n);
        printf("\n");
        for (int i = 0; i < n; i++)
        {
            printf("\n\tNhap thong tin sinh vien thu %d\n", i + 1);
            nhapsv(a[i]);
        }
        goto nhap;
    case 2:
        if (daNhap)
        {
            printf("MSV            Ho va ten                Tuoi    Lop  \n");
            for (int i = 0; i < n; i++)
            {
                hienthi(a[i]);
            }
        }
        else
        {
            printf("Nhap thong tin da!!\n");
            goto baby;
        }
        goto nhap;
    case 3:
        if (daNhap)
        {
            timkiemten(a, n);
        }
        else
        {
            printf("Nhap thong tin da!!\n");
            goto baby;
        }
        goto nhap;

    case 4:
        if (daNhap)
        {
            sapxep(a, n);
        }
        else
        {
            printf("Nhap thong tin da!!\n");
            goto baby;
        }
        goto nhap;
    case 5:
        if (daNhap)
        {
            timkiemmasv(a, n);
        }
        else
        {
            printf("Nhap thong tin da!!\n");
            goto baby;
        }
        goto nhap;

    case 6:
        return 0;
    default:
        printf("Khong hop le!!!\n");
    nhap:
        printf("Nhap phim bat ky de xoa man hinh\n");
        getch();
        system("cls");
        goto here;
    }
}