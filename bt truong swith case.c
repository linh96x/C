//in ra "Thoi khoa bieu"
#include<stdio.h>
#include<conio.h>
int main()
{
    int thu;
    printf("Nhap thu = ");scanf("%d", &thu);
    switch(thu)
    {
        case 2: case 5:printf("Lap trinh co ban");break;
        case 4: case 7:printf("Cau truc du lieu va giai thuat");break;
        case 3:printf("Mang map tinh");break;
        case 6:printf("Tieng anh");break;
        default:
            printf("Nghi!");
    }
}
//doi nam duong lich thanh am lich.
/*int main()
{

    int nam,can,chi;
    printf("Nhap nam duong lich: ");scanf("%d", &nam);
    can = nam%10;
    chi = nam%12;
    switch(can)
    {
        case 0:printf("Canh");break;
        case 1:printf("Tan");break;
        case 2:printf("Nham");break;
        case 3:printf("Quy");break;
        case 4:printf("Giap");break;
        case 5:printf("At");break;
        case 6:printf("Binh");break;
        case 7:printf("Dinh");break;
        case 8:printf("Mau");break;
        case 9:printf("Ky");break;
    }
    printf(" ");
    switch(chi)
    {
        case 0:printf("Than");break;
        case 1:printf("Dau");break;
        case 2:printf("Tuat");break;
        case 3:printf("Hoi");break;
        case 4:printf("Ty");break;
        case 5:printf("Suu");break;
        case 6:printf("Dan");break;
        case 7:printf("Mao");break;
        case 8:printf("Thin");break;
        case 9:printf("Ty");break;
        case 10:printf("Ngo");break;
        case 11:printf("Mui");break;
    }
}*/
