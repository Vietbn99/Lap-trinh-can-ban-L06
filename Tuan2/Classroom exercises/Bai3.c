#include <stdio.h>
#include <math.h>
// hàm ý b
int Sum_b(int n)
{
    int sum = 1;
    for (int i = 2; i <= n; i++)
    {
        sum += pow(i, 2);
    }
    return sum;
}

// hàm ý c
float Sum_c(int n)
{
    float sum = 1;
    for (int i = 2; i <= n; i++)
    {
        sum += 1.0 / i;
    }
    return sum;
}

// ham giai thừa
int factorial(int n)
{
    int sum = 1;
    for (int i = 2; i <= n; i++)
    {
        sum *= i;
    }
    return sum;
}
// hàm ý e
long Sum_e(int n)
{
    long sum = 1;
    for (int i = 2; i <= n; i++)
    {
        sum += factorial(i);
    }
    return sum;
}

int sum_e_2(int n)
{
    int sum = 1;
    int temp = 1;
    for (int i = 2; i <= n; i++)
    {
        temp *= i;
        sum += temp;
    }
    return sum;
}
int main()
{
    int n;
    do
    {
        scanf("%d", &n);
    } while (n <= 0);
    printf("Sum_b = %d\n", Sum_b(n));
    printf("Sum_c = %f\n", Sum_c(n));
    printf("Sum_e = %ld\n", Sum_e(n));
    printf("Sum_e_2 = %d\n", sum_e_2(n));
}