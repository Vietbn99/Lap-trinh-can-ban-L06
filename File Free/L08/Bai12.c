/*
    Viết chương trình thực hiện các yêucầu sau: 
    Nhập vào một xâu ký tự. 
    Đếm xem trong xâu vừa nhập có bao nhiêu chữ cái, bao nhiêu chữ số và bao nhiêu ký tự khác. 
    In kết quả ra màn hình. 
    VD: 65DCht2130@#45 34.’%^ Xau co 4 chu cai, 10 chu so, 7 ky tu khac
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    fflush(stdin);
    printf("Nhap chuoi c: ");
    gets(a);
    int len = strlen(a);
    int so = 0, chu = 0;
    for (int i = 0; i < len; i++)
    {
        if (((a[i] >= 'a') && (a[i] <= 'z')) || ((a[i] >= 'A') && (a[i] <= 'Z')))
        {
            ++chu;
        }
        else if ((a[i] >= '0') && (a[i] <= '9'))
        {
            ++so;
        }
    }
    printf("Chuoi vua nhap gom %d so, %d chu, %d ky tu khac", so, chu, len - (so + chu));
}