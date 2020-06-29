/*
    Viết chương trình nhập vào một tháng và năm bất kỳ sau đó kiểm tra xem tháng đó có bao nhiêu ngày.
        ý tưởng:
        + ta có 1 năm sẽ có những tháng 31 ngày là tháng 1 3 5 7 8 10 12; tháng có 30 ngày là các tháng còn lại
        trừ các tháng 2 có 28 và 29(năm nhuận)
        + ta sẽ check giá trị của biến tháng nếu vào các tháng ngoài tháng 2 thì in ra số ngày tương ứng
        + tiếp đó nếu tháng đó là tháng 2 thì check đến năm nhuận rồi in ra số ngày.
        ***NĂM NHUẬN là năm chia hết cho 4 và không chia hết cho 100 hoặc năm chia hết cho 400 (ngoại lệ).
        + Ví dụ năm ngoại lệ là năm 2100 không phải là năm nhuận
            năm 2100 % 4 =0 nhưng lại chia hết cho 100.
*/

#include <stdio.h> // khai báo thư viện
int main()         // hàm main
{
    int year, month; // khai báo biến month và year kiểu số nguyên
    do
    {
        printf("Nhap thang va nam: ");
        scanf("%d%d", &month, &year);  // lệnh để nhập tháng năm từ bàn phím
    } while (month <= 0 || year <= 0); // lệnh do while để chặn TH năm tháng nhỏ hơn <= 0
    if (month == 1 && month == 3 && month == 5 && month == 7 && month == 8 && month == 10 && month == 12)
    {
        printf("Thang %d/%d co 31 ngay", month, year);
    }
    else if (month == 2)
    {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) // điều kiện của năm nhuận
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