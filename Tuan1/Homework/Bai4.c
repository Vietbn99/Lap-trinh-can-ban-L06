/*
    Đề bài ở file
    ý tưởng: là chạy vòng lặp để tìm n thỏa mãn yêu cầu đề bài rồi tạo vòng lặp chạy từ 1 đến n vừa tìm được để tính tổng.
*/

#include <stdio.h> // khai báo thư viện

int main() // hàm main
{
    int x;
    printf("Nhap x: ");
    scanf("%d", &x);
    float sum = 1; // khởi tạo biến sum bằng 1
    int i = 1;     // khởi tạo biến i = 1
    float temp = x;
    while (temp > 0.00001) // tạo vòng lặp while để chạy i sao cho thỏa mãn điều kiện <0.00001
    {                      // while sẽ dừng lại khi temp >0.00001 và giá trị sum được cộng luôn
        sum += temp;
        i++;
        temp = temp * x / i;
    }
    printf("e^%d = %6f", x, sum); // hàm fun(x) là lời gọi hàm
    return 0;
}