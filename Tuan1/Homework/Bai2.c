/*
    Viet chuong trinh giai phuong trinh trung phuong: ax^4 + bx^2 + c = 0
    Các bước làm: 
    1- ta đặt x^2 = t (t>=0) nên ta có phương trình at^2 + bt + c = 0
    2- giải phương trình ra nghiệm theo điều kiện denta
    3- nếu 
        + vô nghiệm thì pt vô nghiệm
        + nếu có nghiệm kép dương thì có pt ban đầu có 2 nghiệm ...
        + nếu có ngiệm kép âm thì vô nghiệm
        + nếu có nghiệm kép bằng 0 thì pt ban đầu có 1 nghiệm
        + nếu có 2 nghiệm phân biệt cùng nhỏ hơn không thì pt ban đầu vô nghiệm
        + nếu có 2 nghiệm phân biệt mà có 1 âm và 1 nghiệm bằng 0 thì pt ban đầu có 1 nghiệm
        + nếu có 2 nghiệm phân biệt mà có 1 âm và 1 dương thì pt ban đầu có 2 nghiệm
        + nếu có 2 nghiệm phân biệt mà có cả 2 nghiệm đều dương thì pt ban đầu có 4 nghiệm
        + nếu có 2 nghiệm phân biệt mà có 1 nghiệm dương và 1 nghiệm bằng 0 thì pt ban đầu có 3 nghiệm
*/
#include <stdio.h> // Khai báo thư viện để input và output
#include <math.h>  // Khai báo thư viện toán học
int main()
{
    float a, b, c; // Khai báo biến kiểu float
    do
    {
        printf("Nhap vao bo 3 he so cua chuong trinh: ");
        scanf("%f%f%f", &a, &b, &c); // để nhập 3 số từ bàn phím, %f : số chấm động (float); &a..: địa chỉ
    } while (a == 0);                // lệnh do while để loại trừ trường hợp a == 0
    float denta = b * b - 4 * a * c; // Khởi tạo biến denta
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