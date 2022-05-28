/*
a1x + b1y = c1 | x+y=36         | 2x + 2y = 72  | 2y = 28       | y = 14
a2x + b2y = c2 | 2x +4y=100     | 2x + 4y = 100 | 2x + 4y = 100 | x = 22
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a1,a2,b1,b2,c1,c2,x,y,D,D1,D2;
    printf("Nhap a1: ");scanf("%d", &a1);
    printf("Nhap b1: ");scanf("%d", &b1);
    printf("Nhap c1: ");scanf("%d", &c1);
    printf("Nhap a2: ");scanf("%d", &a2);
    printf("Nhap b2: ");scanf("%d", &b2);
    printf("Nhap c2: ");scanf("%d", &c2);
    //cach giai cua thay
    D = a1*b2 - a2*b1;
    D1 = c1*b2 - c2*b1;
    D2 = a1*c2 - a2*c1;
    x = D1/D;
    y = D2/D;
    printf("Phuong trinh co nghiem: x = %d, y = %d", x,y);
}
/*
a1x + b1y + c1z = d1
a2x + b2y + c2z = d2
a3x + b3y + c3z = d3
*/

