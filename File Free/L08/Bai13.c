/*
    Viết chương trình thực hiện các yêu cầu sau: 
    Nhập vào một chuỗi ký tự và một ký tự Yêu cầu: 
    a.  Đếm số lần xuất hiện của ký tự đó trong chuỗi. 
    b.  Kiểm tra tính đối xứng của chuỗi 
    c.  Nếu chuỗi không đối xứng in lại chuỗi đảo ngược
*/
#include <stdio.h>
#include <string.h>

//phan a
int demsolanxh(char a[], char b)
{
    int dem = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == b)
        {
            ++dem;
        }
    }
    return dem;
}

// phan b
void doixung(char a[])
{
    int dem = 0;
    for (int i = 0; i < (strlen(a) / 2); i++)
    {
        if (a[i] == a[strlen(a) - 1 - i])
        {
            ++dem;
        }
    }
    if (dem == strlen(a) / 2)
    {
        printf("Chuoi da cho doi xung\n");
    }
    else
    {
        printf("Chuoi da cho khong doi xung\n");
        for (int i = (strlen(a) - 1); i >= 0; i--)
        {
            printf("%c", a[i]);
        }
    }
}

int main()
{
    char a[100], b;
    fflush(stdin);
    printf("Nhap chuoi c: ");
    gets(a);
    scanf("%c", &b);
    printf("ky tu \"%c\" xuat hien %d lan\n", b, demsolanxh(a, b));
    doixung(a);
}