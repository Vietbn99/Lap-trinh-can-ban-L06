/*
    Viết chương trình nhập vào một tháng và năm bất kỳ sau đó kiểm tra xem tháng đó có bao nhiêu ngày.
*/

#include <stdio.h>
int main()
{
    int year, month;
    do
    {
        printf("Nhap thang va nam: ");
        scanf("%d%d", &month, &year);
    } while (month < 0 || year < 0);
    if (month == 1 && month == 3 && month == 5 && month == 7 && month == 8 && month == 10 && month == 12)
    {
        printf("Thang %d/%d co 31 ngay", month, year);
    }
    else if (month == 2)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 == 0))
        {
            printf("Thang %d/%d co 29 ngay", month, year);
        }
        else
            printf("Thang %d/%d co 28 ngay", month, year);
    }
    else
        printf("Thang %d/%d co 30 ngay", month, year);
    return 0;
}