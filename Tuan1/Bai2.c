/*
    Viet chuong trinh giai phuong trinh trung phuong: ax^4 + bx^2 + c = 0
*/
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    do
    {
        printf("Nhap vao bo 3 he so cua chuong trinh: ");
        scanf("%f%f%f", &a, &b, &c);
    } while (a == 0);
    float denta = b * b - 4 * a * c;
    if (denta < 0)
    {
        printf("Phuong trinh vo nghiem\n");
    }
    else if (denta == 0)
    {
        float x = -b / (2 * a);
        if (x < 0)
        {
            printf("Phuong trinh vo nghiem\n");
        }
        else if (x == 0)
        {
            printf("Phuong trinh co nghiem duy nhat: x = %.2f\n", x);
        }
        else
        {
            printf("Phuong trinh co 2 nghiem phan biet la x1 = %.2f\tx2 = %.2f\n", sqrt(x), -(sqrt(x)));
        }
    }
    else
    {
        float x1 = (-b + sqrt(denta)) / (2 * a);
        float x2 = (-b - sqrt(denta)) / (2 * a);
        if (x1 < 0)
        {
            if (x2 < 0)
            {
                printf("Phuong trinh vo nghiem\n");
            }
            else if (x2 == 0)
            {
                printf("Phuong trinh co nghiem duy nhat: x = 0\n");
            }
            else
            {
                printf("Phuong trinh co 2 nghiem phan biet la x1 = %.2f\t x2 = %.2f\n", sqrt(x2), -(sqrt(x2)));
            }
        }
        else if (x1 == 0)
        {
            if (x2 < 0)
            {
                printf("Phuong trinh co nghiem duy nhat: x = 0\n");
            }
            else if (x2 == 0)
            {
                printf("Phuong trinh co nghiem duy nhat: x = 0\n");
            }
            else
            {
                printf("Phuong trinh co 3 nghiem phan biet la x1 = %.2f\t x2 = %.2f\t x3 = 0\n", sqrt(x2), -(sqrt(x2)));
            }
        }
        else
        {
            if (x2 < 0)
            {
                printf("Phuong trinh co 2 nghiem phan biet la x1 = %.2f\t x2 = %.2f\n", sqrt(x1), -(sqrt(x1)));
            }
            else if (x2 == 0)
            {
                printf("Phuong trinh co 3 nghiem phan biet la x1 = %.2f\t x2 = %.2f\t x3 = 0\n", sqrt(x1), -(sqrt(x1)));
            }
            else
            {
                printf("Phuong trinh co 4 nghiem phan biet la x1 = %.2f\t x2 = %.2f\t x3 = %.2f\t x4 = %.2f\n", sqrt(x2), -(sqrt(x2)), (sqrt(x1)), -(sqrt(x1)));
            }
        }
    }
    return 0;
}