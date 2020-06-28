#include <stdio.h>
int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    float sum = 1;
    int temp = 1;
    for (int i = 2; i <= n; i++)
    {
        temp *= i;
        sum += 1.0 / temp;
    }
    printf("S = %f", sum);
    return 0;
}