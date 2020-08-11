/*
    Câu  6:Viết chương trình tìm bội số chung nhỏ nhất của hai số nguyên dương nhập vào từ bàn phím.
*/

#include <stdio.h>

int main()
{
    int a, b, bcnn;
    printf("Hai so can tim boi so nho nhat la: ");
    scanf("%d%d", &a, &b);
    int max = (a > b) ? a : b;
    int lon = a * b;
    for (int i = max; i <= lon; i += max)
    {
        if (i % a == 0 && i % b == 0)
        {
            bcnn = i;
            break;
        }
    }
    printf("BCNN cua %d va %d la: %d\n", a, b, bcnn);
    return 0;
}