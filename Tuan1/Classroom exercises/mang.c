/*
    Tính tổng các số chẵn cảu mạng
*/
#include <stdio.h>
int main()
{
    int arr[100], n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
        }
    }
    printf("sum = %d", sum);
    return 0;
}