/*
    Nhập độ dài 3 cạnh của một tam giác. Kiểm tra đó có phải là tam giác không và là tam giác gì.
*/
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    printf("Nhap vap 3 canh can kiem tra: ");
    scanf("%f%f%f", &a, &b, &c);
    if (a < (b + c) && b < (a + c) && c < (b + a))
    {
        if (a * a == (b * b + c * c) || b * b == (a * a + c * c) || c * c == (b * b + a * a))
        {
            printf("Day la tam giac vuong\n");
        }
        else if (a == b == c)
        {
            printf("Day la tam giac deu\n");
        }
        else if (a == b || a == c || c == b)
        {
            printf("Day la tam giac can\n");
        }
        else if (a * a > (b * b + c * c) || b * b > (a * a + c * c) || c * c > (b * b + a * a))
        {
            printf("Day la tam giac tu\n");
        }
        else
        {
            printf("Day la tam giac nhon\n");
        }
    }
    else
    {
        printf("Ba canh da nhap khong phai la 3 canh cua tam giac.\n");
    }
    return 0;
}