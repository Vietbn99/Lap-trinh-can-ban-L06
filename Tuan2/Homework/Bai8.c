/*
    Viết chương trình tính các hàm số sau đây bằng phươnng pháp đệ quy
        1. f(x, n) = x^n
        2. s(n) = (2n)!

*/

#include <stdio.h> // khai báo thư viện

// hàm đệ quy ý 1
int PhanY1(int x, int n)
{
    if (n == 1)
    {
        return x;
    }
    return PhanY1(x, n - 1) * x;
}

// hàm đệ quy ý 2
int PhanY2(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return PhanY2(n - 1) * n;
}
int main()
{
    int x, n;
    scanf("%d%d", &x, &n);
    printf("%d\n", PhanY1(x, n));
    printf("%d\n", PhanY2(2 * n));
}