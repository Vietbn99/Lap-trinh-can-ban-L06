/*
    Câu 8:Nhập vào một dãy n số bất kỳ từ bàn phím. 
    Tìm giá trị lớn nhất và nhỏ nhất của dãy số đó. 
    In kết quả tìm được ra màn hình cùng vị trí của các giá trị max, min trong dãy số.
*/

#include <stdio.h>
#define MAX 100

void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("pt[%d] = ", i + 1);
        scanf("%d", &a[i]);
    }
}

int maxmin(int a[], int n, int luachon)
{
    int maxmin = a[0];
    if (luachon > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (maxmin < a[i])
            {
                maxmin = a[i];
            }
        }
        return maxmin;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (maxmin > a[i])
            {
                maxmin = a[i];
            }
        }
        return maxmin;
    }
}

void vitri(int a[], int n, int maxmin)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == maxmin)
        {
            printf("%d\t", i + 1);
        }
    }
}

int main()
{
    int a[MAX], n;
    printf("n = ");
    scanf("%d", &n);
    nhap(a, n);
    printf("Gia tri lon nhat cua day la %d\n", maxmin(a, n, 1));
    printf("Gia tri nho nhat cua day la %d\n", maxmin(a, n, -1));
    printf("\nVi tri cua gia tri lon nhat la: ");
    vitri(a, n, maxmin(a, n, 1));
    printf("\nVi tri cua gia tri nho nhat la: ");
    vitri(a, n, maxmin(a, n, -1));
    return 0;
}