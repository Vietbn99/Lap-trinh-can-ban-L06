/*
    Câu 10:Nhập vào 2 số là tháng và năm, kiểm tra xem tháng đó có bao nhiêu ngày. 
    In kết quả ra màn hình theo dạng: Tháng 3 năm 2014 có 31 ngày.
*/
#include <stdio.h>

int main()
{
    int thang, nam;
    printf("Thang: ");
    scanf("%d", &thang);
    printf("Nam: ");
    scanf("%d", &nam);
    if ((thang == 1) || (thang == 3) || (thang == 5) || (thang == 7) || (thang == 8) || (thang == 10) || (thang == 12))
    {
        printf("Thang %d nam %d co 31 ngay\n", thang, nam);
    }
    else if (thang == 2)
    {
        if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0)
        {
            printf("Thang %d nam %d co 29 ngay\n", thang, nam);
        }
        else
        {
            printf("Thang %d nam %d co 28 ngay\n", thang, nam);
        }
    }
    else
    {
        printf("Thang %d nam %d co 30 ngay\n", thang, nam);
    }
    return 0;
}