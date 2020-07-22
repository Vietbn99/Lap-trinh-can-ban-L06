/*
    Cho mảng một chiều A, n phần tử (n&lt;100). 
            Xây dựng chương trình thực hiện các công việc sau:
        1. Nhập mảng
        2. Xuất mảng
        3. Đếm số phần tử âm
        4. Tìm phần tử Max và Min của mảng
        5. Tìm phần tử âm lớn nhất và dương bé nhất của mảng
        6. Liệt kê các số nguyên tố trong mảng
        7. Liệt kê các số chính phương trong mảng
        8. Sắp xếp mảng theo thứ tự tăng dần
        9. Sắp xếp mảng theo thứ tự giảm dần
        10. Thêm/Xóa/Sửa một phần tử vào mảng
            Yêu cầu:
        1. Xây dựng menu cho phép người dùng chọn chức năng
        2. Khi người dùng chọn chức năng nào sẽ thực hiện chức năng đó
        3. Nếu người dùng chọn 0 sẽ thoát chương trình
*/

#include <stdio.h>
#include <math.h>
#include <conio.h>

// hàm nhập
void Nhap(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Pt[%d] = ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// hàm xuất
void InRaManHinh(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}

// hàm đến các pt âm
int DemptAm(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            ++count;
        }
    }
    return count;
}

// tìm phần tử min và max của mảng
int MaxMang(int arr[], int n, int k)
{
    int MaxMin = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (k > 0)
        {
            if (MaxMin < arr[i])
            {
                MaxMin = arr[i];
            }
        }
        else
        {
            if (MaxMin > arr[i])
            {
                MaxMin = arr[i];
            }
        }
    }
    return MaxMin;
}

// tìm phần tử âm lớn nhất và dương bé nhất
void AmLonDuongBe(int arr[100], int n)
{
    int a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (a == 0)
            {
                a = arr[i];
            }
            else
            {
                if (a < arr[i])
                {
                    a = arr[i];
                }
            }
        }
        else if (arr[i] > 0)
        {
            if (b == 0)
            {
                b = arr[i];
            }
            else
            {
                if (b > arr[i])
                {
                    b = arr[i];
                }
            }
        }
    }
    printf("pt Am lon nhat la %d", a);
    printf("pt Duong Be nhat la %d", b);
}

// Liệt kê các số nguyên tố trong mảng
void LietKeSNT(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 2)
        {
            printf("%d\t", arr[i]);
        }
        else if (arr[i] > 2)
        {
            int count = 0;
            for (int j = 2; j < arr[i]; j++)
            {
                if (arr[i] % j == 0)
                {
                    ++count;
                }
            }
            if (count == 0)
            {
                printf("%d\t", arr[i]);
            }
        }
    }
}

//Liệt kê các số chính phương trong mảng
void LietKeSCP(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < arr[i]; j++)
        {
            if ((j * j) == arr[i])
            {
                printf("%d\t", arr[i]);
                break;
            }
        }
    }
}

// Sắp xếp mảng theo thứ tự tăng dần
void SxTangDan(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Sắp xếp mảng theo thứ tự giảm dần
void SxGiamDan(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

//Thêm/Xóa/Sửa một phần tử vào mảng
/*void Themxoasua(int *arr, int n)
{
    int choose;
    printf("Moi ban chon cac yeu cau: \n1. Them phan tu:\n2. Xoa Phan tu\n3.Sua Phan tu\n");
    scanf("%d", &choose);
    switch (choose)
    {
    case 1:
        int a = 0;
        printf("Ban them pt vao vi tri nao cua mang");
        scanf("%d", &a);
        printf("Gia tri cua pt do: ");
        int data = 0;
        scanf("%d", &data);
        ++n;
        if (a < n)
        {
            int value;
            for (int i = (a - 1); i < n; i++)
            {
                value = arr[i];
                arr[i] = data;
                arr[i + 1] = value;
            }
        }
        else
        {
            arr[n] = data;
        }
        break;
    case 2:
        int a = 0;
        printf("Ban xoa pt vao vi tri nao cua mang");
        scanf("%d", &a);
        if (a < n)
        {
            --n;
            int value;
            for (int i = (a - 1); i < n; i++)
            {
                arr[i] = arr[i + 1];
            }
        }
        break;
    case 3:
        int a = 0;
        printf("Ban sua pt vao vi tri nao cua mang");
        scanf("%d", &a);
        printf("Gia tri cua pt do moi la: ");
        int data = 0;
        scanf("%d", &data);
        if (a < n)
        {
            arr[a - 1] = data;
        }
        else
        {
            arr[n - 1] = data;
        }
        break;
    }
}
*/
int main()
{
    int arr[100];
    int n;
    printf("\t\t\tMenu\n");
    printf("1. Nhap mang\n2. Xuat mang\n3. Dem so pt am\n4. Tim pt Max and Min of mang\n5. Tim pt am max va duong be nhat of mang\n6. Liet ke cac SNT trong mang\n7. Liet ke cac so chinh phuong trong mang\n8. Sap xep mang theo thu tu tang dan\n9. Sap xep mang theo thu tu giam dan\n10. Them/Xoa/Sua mot phan tu vao mang.\n");
    printf("Moi ban nhap yeu cau: ");
    int choose;
nhap:
    scanf("%d", &choose);
    switch (choose)
    {
    case 0:
        break;
    case 1:
        printf("Nhap n = ");
        scanf("%d", &n);
        Nhap(arr, n);
        goto nhap;
    case 2:
        InRaManHinh(arr, n);
        goto nhap;
    case 3:
        printf("So phan tu am la %d\n", DemptAm(arr, n));
        goto nhap;
    case 4:
        printf("Max la %d\n", MaxMang(arr, n, 1));
        printf("Min la %d\n", MaxMang(arr, n, -1));
        goto nhap;
    case 5:
        AmLonDuongBe(arr, n);
        goto nhap;
    case 6:
        printf("Cac so nguyen to co trong mang: \n");
        LietKeSNT(arr, n);
        goto nhap;
    case 7:
        LietKeSCP(arr, n);
        goto nhap;
    case 8:
        printf("Mang tang dan la:\n");
        SxTangDan(arr, n);
        InRaManHinh(arr, n);
        goto nhap;
    case 9:
        printf("Mang giam dan la:\n");
        SxGiamDan(arr, n);
        InRaManHinh(arr, n);
        goto nhap;
        // case 10:
        //     Themxoasua(arr, &n);
        //     goto nhap;
    }
}