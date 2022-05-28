#include<stdio.h>
int main()
{
    char Luachon;
    printf("Cau hoi: Con cho di bang may chan?");
    printf("\nA. 1\nB. 2\nC. 3\nD. 4\n");
    printf("Nhap vao dap an ban chon(a,b,c,d): ");
    Luachon= getchar(); //nhap vao 1 ki tu
    switch( Luachon )
    {
        case 'a':
        case 'A':
        case 'b':
        case 'B':
        case 'c':
        case 'C':
            {
                printf("\nRat tiec, ban da chon sai!");
                break;
            }
        case 'd':
        case 'D':
            {
                printf("\nChinh xac! Xin chuc mung!\a");
                break;
            }
    }
}

