/*
    Câu 3 :Nhập vào một dãy n số bất kỳ từ bàn phím. 
    Sau đó sắp xếp dãy số theo chiều tăng dần. 
    In ra màn hình dãy số ban đầu và dãy số đã sắp xếp.
*/

#include <stdio.h>
#define MAX 100

void hienthi(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%.2f\t", a[i]);
    }
}

int main()
{
    float a[MAX];
    int n;
    printf("Mang gom bao nhieu phan tu: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Phan tu thu %d = ", i + 1);
        scanf("%f", &a[i]);
    }
    printf("Day so vua nhap la: \n");
    hienthi(a, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                float temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nDay so sap xep tang dan:\n");
    hienthi(a, n);
    return 0;
}