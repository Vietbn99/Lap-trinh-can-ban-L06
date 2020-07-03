/*
    Viết chương trình xây dựng các hàm tính tổng hiệu tích thương của 2 số nguyên
*/
// khai báo thư viện
#include <stdio.h>

// hàm tính tổng
void Sum(int a, int b)
{
    printf("Sum = %d\n", a + b);
}

// hàm tính hiệu
int Subtracted(int a, int b)
{
    return a - b;
}

// hàm tính tích
void Product(int a, int b)
{
    printf("Product = %d\n", a * b);
}

// hàm tính thương
float Divide(int a, int b)
{
    return (1.0) * a / b; // nhớ ép kiểu
}

// hàm main
int main()
{
    int a, b;
    printf("Nhap vao 2 so nguyen: ");
    scanf("%d%d", &a, &b);
    printf("\n"); // tạo 1 dòng trắng
    Sum(a, b);
    Product(a, b);
    printf("Subtracted = %d\n", Subtracted(a, b));
    printf("Divide = %.2f\n", Divide(a, b));
    printf("\n");
    return 0;
}