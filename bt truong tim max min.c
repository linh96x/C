/*Nhap 2 so nguyen a,b
in ra man hinh so lon nhat va so be nhat*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,max,min;
    printf("Nhap a: ");scanf("%d", &a);
    printf("Nhap b: ");scanf("%d", &b);
    printf("Nhap c: ");scanf("%d", &c);

    if(a>b>c)
    {
        max = a;
    }
    else if(b>a>c)
    {
        max =b;
    }
    else
    {
        max = c;
    }
    if(a<b<c)
    {
        min = a;
    }
    else if(b<a<c)
    {
        min = b;
    }
    else
    {
        min = c;
    }
    printf("So lon nhat la: %d\n", max);
    printf("So be nhat la: %d", min);
}
