/*
    Câu 1:Viết chương trình giải phương trình bậc hai: ax2+ bx + c = 0, 
    với a, b, c là các hệ số thực nhập vào từ bàn phím.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    printf("Nhap vao bo 3 he so cua phuong trinh bac 2: ");
    do
    {
        scanf("%f%f%f", &a, &b, &c);
    } while (a == 0);
    float denta = b * b - 4 * a * c;
    if (denta < 0)
    {
        printf("Phuong trinh da cho vo nghiem\n");
    }
    else if (denta == 0)
    {
        printf("Phuong trinh co nghiem kep x = %.5f", -b / (2 * a));
    }
    else
    {
        printf("Phuong trinh co 2 nghiem phan biet x1 = %.2f va x2 = %.2f", (-b + sqrt(denta)) / (2 * a), (-b - sqrt(denta)) / (2 * a));
    }
    return 0;
}