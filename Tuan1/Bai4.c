#include <stdio.h>

float fun(int x)
{
    float sum = 1;
    int i = 1;
    float temp = x;
    while (temp > 0.00001)
    {
        sum += temp;
        i++;
        temp = temp * x / i;
    }
    return sum;
}

int main()
{
    int x;
    printf("Nhap x: ");
    scanf("%d", &x);
    printf("e^x: %6f", fun(x));
    return 0;
}