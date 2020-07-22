/*
    Viết chương trình thực hiện các yêu cầu sau: Nhập vào một xâu ký tự, đếm số từ trong xâu. 
    In ra màn hình từ có độ dài lớn nhất. 
    VD: Cong hoa     xa  hoi chu    nghia Viet Nam Xau co 8 tu Tu dai nhat: nghia
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    fflush(stdin);
    printf("Nhap chuoi c: ");
    gets(str);
    int dem = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
        {
            ++dem;
        }
    }

    // cau lenh in ra man hinh tu dai nhat
    int num;
    int maxx = 0, maxi = 0;
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] != ' ')
        {
            int dem1 = 0;
            while (str[i] != ' ' && str[i] != '\0')
            {
                dem1++;
                i++;
            }
            if (dem1 > maxx)
            {
                maxx = dem1;
                maxi = i - dem1;
            }
        }
    }
    printf("Tu dai nhat trong chuoi la: ");
    while (str[maxi] != ' ' && str[maxi] != '\0')
    {
        printf("%c", str[maxi]);
        ++maxi;
    }

    printf("\n%d", dem);
}