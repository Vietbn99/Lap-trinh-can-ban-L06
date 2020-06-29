/*
    Viet chuong trinh giai phuong trinh bac 2: ax^2 + bx + c = 0
*/
#include <stdio.h> // Khai báo thư viện
#include <math.h>  // Khai báo thư viện toán học
int main()
{
    float a, b, c; // khai báo biến kiểu float
    do
    {
        printf("Nhap vao bo 3 he so cua chuong trinh:");
        scanf("%f%f%f", &a, &b, &c); // nhập vào từ bàn phím, %f là định dạng của kiểu float,  &a...: là địa chỉ
    } while (a == 0);                // lệnh do while dùng để lọc giá trị bằng 0 của a
    float denta = b * b - 4 * a * c; // Khởi tạo biến denta kiểu float
    if (denta == 0)
    {
        printf("Phuong trinh co nghiem kep x = %.2f\n", -b / (2 * a));
    }
    else if (denta > 0)
    {
        printf("Phuong trinh co 2 nghiem phan biet: x1 = %.2f\tx2 = %.2f\n", (-b + sqrt(denta)) / (2 * a), (-b - sqrt(denta)) / (2 * a));
    }
    else
        printf("Phuong trinh da cho vo nghiem.\n");
    return 0;
}
