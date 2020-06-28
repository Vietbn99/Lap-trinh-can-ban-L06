/*
    S = 1 + 1/2 + ... + 1/n
*/

#include <stdio.h>
int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    float sum = 1;
    for (int i = 2; i < n + 1; i++)
    {
        sum += 1.0 / i;
    }
    printf("S = %.2f\n", sum);
}