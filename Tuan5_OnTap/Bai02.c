/*
    Câu 2:Viết chương trình nhập vào tổng thu nhập GDP của nước ta năm 2014 
    (tính theo USD) và tốc độ tăng trưởng kinh tế bình quân nào đó. 
    In ra màn hình thu nhập GDP của các năm theo dạng:
        Năm     GDP
        2014    100
        2015    112.5
        ...     ...
    cho đến năm có GDP >= 2 lần năm 2014 thì dừng.
*/

#include <stdio.h>
int main()
{
    float thunhap, tocdo;
    printf("Tong thu nhap GDP cua nuoc ta nam 2014: ");
    scanf("%f", &thunhap);
    printf("Toc do tang truong kinh te binh quan: ");
    scanf("%f", &tocdo);
    printf("Nam     GDP\n");
    float temp = thunhap;
    int nam = 2014;
    while (temp < (2 * thunhap))
    {
        printf("%d\t%.2f\n", nam++, temp);
        temp += (temp * tocdo) / 100;
    }
    printf("%d\t%.2f\n", nam++, temp);
    return 0;
}