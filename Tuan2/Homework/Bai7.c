/*
    Viết chương trình nhập vào một dãy số, sau đó in ra các số âm ở trên 1 dòng và các số dương ở trên 1 dòng
*/

#include <stdio.h>

void InRaSo(int arr[100], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] * k) < 0)
        {
            printf("%d\t", arr[i]);
        }
    }
}
int main()
{
    int arr[100]; // khai báo mảng gồm 100 phần tử
    int n;
    printf("n = ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("pt[%d] = ", i + 1);
        scanf("%d", &arr[i]);
    }
    InRaSo(arr, n, 1); // in ra dòng số âm
    printf("\n");
    InRaSo(arr, n, -1); // in ra dòng số dương
    return 0;
}