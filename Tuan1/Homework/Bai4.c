/*
    Đề bài ở file
*/

#include <stdio.h> // khai báo thư viện

float fun(int x) // tạo hàm trả kết quả float nên phải có return ....;
{
    float sum = 1; // khởi tạo biến sum bằng 1
    int i = 1;     // khởi tạo biến i = 1
    float temp = x;
    while (temp > 0.00001) // tạo vòng lặp while để chạy i sao cho thỏa mãn điều kiện <0.00001
    {                      // while sẽ dừng lại khi temp >0.00001 và giá trị sum được cộng luôn
        sum += temp;
        i++;
        temp = temp * x / i;
    }
    return sum;
}

int main() // hàm main
{
    int x;
    printf("Nhap x: ");
    scanf("%d", &x);
    printf("e^x: %6f", fun(x)); // hàm fun(x) là lời gọi hàm
    return 0;
}