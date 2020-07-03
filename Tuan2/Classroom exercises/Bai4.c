/*
    ước số chung lớn nhất của 2 số nguyên.
*/
#include "stdio.h"

//hàm tìm UCLN
void Ucln(int a, int b)
{
    while (a * b != 0)
    {
        if (a > b)
        {
            a %= b;
        }
        else
        {
            b %= a;
        }
    }
    printf("UCLN = %d", a + b);
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    Ucln(a, b);
    return 0;
}