/*
    Đề bài ở file đề
*/
#include <stdio.h> // khai báo thư viện
int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    float sum = 1;
    int temp = 1;
    for (int i = 2; i <= n; i++) // vòng lặp chạy i từ 2 đến n
    {
        temp *= i;         // đây là toán tử tương đương temp = temp*i;
        sum += 1.0 / temp; // nhớ ép kiểu nhé vì 1 và temp đều số nguyên nên kết quả sẽ ra số nguyên.
    }
    printf("S = %f", sum);
    return 0;
}