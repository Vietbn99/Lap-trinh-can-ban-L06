#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#define MAX 100

void menu()
{
    printf("\t ______________________________________ \n");
    printf("\t|                MENU                  |\n");
    printf("\t|--------------------------------------|\n");
    printf("\t| 1 - Nhap n                           |\n");
    printf("\t| 2 - Tinh ma tran xoay                |\n");
    printf("\t| 3 - Hien thi ma tran xoay            |\n");
    printf("\t| 4 - Thoat                            |\n");
    printf("\t|______________________________________|\n");
    printf("\tVui long chon: ");
}


void tinhMatrix(int m[MAX][MAX], int n)
{
    //Định ra lề trái phải trên dưới
    int i, j;
    int top = 0;
    int left = 0;
    int bot = n-1;
    int right = n-1;
    j = 1;
    //Điền lần lượt giá trị vào ma trận theo chiều xoắn ốc, điền xong 1 đường thẳng là thu hẹp lề lại
    while (1)
    {

        //Điền từ trái qua phải ở lề trên
        for (i=left; i<=right; i++)
            m[top][i] = j++;
        top++;                          //Thu hẹp lề trên


        if (j>n*n)
            break;

        //Điền từ trên xuống dưới ở lề phải
        for (i=top; i<=bot; i++)
            m[i][right] = j++;
        right--;                        //Thu hẹp lề phải
        if (j>n*n)
            break;

        //Điền từ phải qua trái ở lề dưới
        for (i=right; i>=left; i--)
            m[bot][i] = j++;
        bot--;                          //Thu hẹp lề dưới

        if (j>n*n)
            break;

        //Điền từ dưới lên trên ở lề trái
        for (i=bot; i>=top; i--)
            m[i][left] = j++;
        left++;                         //Thu hẹp lề trái
        if (j>n*n)
            break;
    }
}

//In ma tran
void inMatrix (int m[MAX][MAX], int n)
{
    int i, j;
    for (i=0; i<n; i++)
    {
        printf("\t\t");
        for (j=0; j<n; j++)
           printf("%4d",m[i][j]);
        printf("\n");
    }
}

//Nhap so nguyen duong
int nhapSo()
{
    int n;
    do
    {
        scanf("%d ",&n);
        if (n<0)
            printf("\t\aNhap n >= 0. Nhap lai: ");
    }
    while (n<0);
    return n;
}


int main ()
{
    int select;
    int m[MAX][MAX];
    int flag1 = 0;
    int flag2 =    int n;
    while (1)
    {
        menu();
        scanf("%d",&select);
        system("cls");
        switch(select)
        {
            case 1:
                printf("\tBan da chon nh ap kich co ma tran vuong\n");
                pr intf("\tNhap n: ");
            n = n                      flag1 = 1;
                printf("\tBan da             ng cap %d\n",n);
                 ;
                                 if                         {
                    printf("\t\ aNhap            
                break;             }
                       an                  vuong cap %d\n",n);
                            
                  = 1               break;
            case 3:
                if  (flag                   {
                     tf("\t\aNhap            
                break;             }
                       0)                                    printf("\t\aTi                ;
                 rea                }
                    \tM                a: \n",n);
                inMatrix(                   break            ase                 printf("\tBan da chon thoat, xin  chao!                 exit(0 );
             lt:
            printf("            tu 1-4!!!\n");
                break;
               printf("\t         ky de ve                getch();
        system("cls");
               
