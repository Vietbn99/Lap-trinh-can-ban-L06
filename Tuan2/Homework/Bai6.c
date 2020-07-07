/*
    Viết chương trình (gồm 1 hàm nhập, 1 hàm kiểm tra số nguyên tố)
        Nhập vào 1 dãy số từ bàn phím
        tính tổng các số nguyên tố của dãy các số vừa nhập vào
*/
#include <stdio.h> // khai báo thư viện
#include <math.h>
// hàm nhập không trả về giá trị
void HamNhap(int arr[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("pt[%d] = ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// kiểm tra số nguyên tố nếu là số nguyên tố và trả về tổng các số nguyên tố
int SoNguyenTo(int arr[100], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int k = 2; k < arr[i]; k++)
        {
            if (arr[i] % k == 0)
            {
                ++count;
            }
        }
        if (count == 0 && arr[i] >= 2)
        {
            printf("%d is SNT\n", arr[i]);
            sum += arr[i];
        }
        else
        {
            printf("%d is not SNT\n", arr[i]);
        }
    }
    return sum;
}

int main()
{
    int arr[100]; // khai báo mảng gồm 100 phần tử thuộc kiểu int
    int n;
    printf("n = ");
    scanf("%d", &n);
    HamNhap(arr, n);
    printf("Sum of SNT = %d", SoNguyenTo(arr, n));
}