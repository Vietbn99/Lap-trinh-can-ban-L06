/*
    Nhập  xâu  ký  tự họ và tên. 
    Hãy  chuẩn hóa xâu đó và in kết quả ra màn hình. 
    (Các ký tự đầu viết hoa, các ký tự sau viết thường,
    giữa các từ có 1 ký tự trắng, không có ký trắng ở đầu hoặc cuối xâu)
*/
#include <stdio.h>
#include <string.h>

// ham chuan hoa
void ChuanHoa(char a[])
{
    int last = strlen(a) - 1;
    int first = 0;
    while (first < last && a[first] == ' ')
    {
        first++;
    }
    while (last > first && a[last] == ' ')
    {
        last--;
    }
    if (a[first] >= 'a' && a[first] <= 'z')
    {
        a[first] -= 32;
    }
    for (int i = first + 1; i <= last; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] += 32;
        }
        if (i + 1 <= last)
        {
            if (a[i] == a[i + 1] && a[i] == ' ')
            {
                continue;
            }
            if (a[i] == ' ' && a[i + 1] >= 'a' && a[i + 1] <= 'z')
            {
                a[i + 1] -= 32;
            }
        }
        printf("%c", a[i]);
    }
}

int main()
{
    char a[100];
    fflush(stdin);
    printf("Nhap ho va ten: ");
    gets(a);
    ChuanHoa(a);
}