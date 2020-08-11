/*
    Câu 7:Viết chương trình nhập vào ba số a, b, c.
    Sau đó kiểm tra xem ba số này có tạo thành cạnh của tam giác hay không. 
    Nếu là tam giác thì kiểm tra xem đó là loại tam giác nào
    trong số các loại sau: vuông, cân, vuông cân, đều, tam giác thường.
*/

#include <stdio.h>

int main()
{
    float a, b, c;
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);
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