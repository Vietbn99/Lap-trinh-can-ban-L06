/*
    Câu 4:Viết chương trình giải hệ 2 phương trình bậc nhất 
    ax + by = c và dx + ey = f, 
    với a, b, c, d, e, f, là các hệ số thực nhập vào từ bàn phím. 
    Thông báo kết quả ra màn hình.
*/

#include <stdio.h>
int main()
{
    float a, b, c, d, e, f;
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);
    printf("d = ");
    scanf("%f", &d);
    printf("e = ");
    scanf("%f", &e);
    printf("f = ");
    scanf("%f", &f);

    float D, Dx, Dy, x, y;
    D = a * e - b * d;
    Dx = c * e - b * f;
    Dy = a * f - c * d;
    if (D == 0)
    {
        if (Dx + Dy == 0)
            printf("He phuong trinh co vo so nghiem");
        else
            printf("He phuong trinh vo nghiem");
    }
    else
    {
        x = Dx / D;
        y = Dy / D;
        printf("He phuong trinh co nghiem (x, y) = (%.2f, %.2f)", x, y);
    }
    return 0;
}