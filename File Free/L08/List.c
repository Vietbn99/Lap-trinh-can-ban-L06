/*
    đề bài
*/

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

typedef struct SinhVien
{
    int maSV;
    char hoten[30];
    char gioitinh[5];
    float diemtb;
} SV;
typedef struct Node
{
    SV data;
    struct Node *next;
} * Node;

Node head, tail;

// tao khoi danh sach trong
void init(Node l)
{
    l = NULL;
}

void Nhap1sv(SV a)
{
    printf("Ma sinh vien: ");
    scanf("%d", &a.maSV);
    printf("Ho va ten: ");
    fflush(stdin);
    gets(a.hoten);
    printf("Gioi tinh: ");
    fflush(stdin);
    gets(a.gioitinh);
    printf("Diem TB: ");
    scanf("%f", &a.diemtb);
}

// tao node
Node getnode(SV a)
{
    Node temp;
    temp = (Node *)malloc(sizeof(Node));
    temp->data = a;
    temp->next = NULL;
    return temp;
}

// them node dau
Node AddHead(Node head, SV a)
{
    Node temp = getnode(a);
    if (head->next == NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
    return head;
}

// xuat
void Xuat(SV a)
{
    printf("%d\t%20s%20s\t%.2f", a.maSV, a.hoten, a.gioitinh, a.diemtb);
}

// xuat danh sach sinh vien
void xuatds(Node head)
{
    Node k;
    for (k = head)
}
int main()
{
}
