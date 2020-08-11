/*
    Câu 5:Tính giá trị n giai thừa (n!), với n nhập vào từ bàn phím. In kết quả ra màn hình.
*/

#include <stdio.h>

int giaithua(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * giaithua(n - 1);
}

int main()
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    printf("%d! = %d", n, giaithua(n));
    return 0;
}