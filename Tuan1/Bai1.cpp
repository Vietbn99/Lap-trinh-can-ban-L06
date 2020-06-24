/*
    Viet chuong trinh giai phuong trinh bac 2: ax^2 + bx + c = 0
*/
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    do
    {
        printf("Nhap vao bo 3 he so cua chuong trinh:");
        scanf("%f%f%f", &a, &b, &c);
    } while (a == 0);
    float denta = b * b - 4 * a * c;
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
