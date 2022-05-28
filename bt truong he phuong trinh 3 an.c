//he phuong trinh bac 1 3 an
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float a1,a2,a3,b1,b2,b3,c1,c2,c3,d1,d2,d3,D = 0,Dx = 0,Dy= 0,Dz = 0;
    float x= 0, y= 0, z= 0;
    printf("a1x + b1y + c1z = d1\n");//d1 b1 c1///a1 d1 c1////a1 b1 d1
    printf("a2x + b2y + c2z = d2\n");//d2 b2 c2///a2 d2 c2////a2 b2 d2
    printf("a3x + b3y + c3z = d3\n");//d3 b3 c3///a3 d3 c3////a3 b3 d3
    printf("Nhap a1: ");scanf("%f", &a1);
    printf("Nhap b1: ");scanf("%f", &b1);
    printf("Nhap c1: ");scanf("%f", &c1);
    printf("Nhap d1: ");scanf("%f", &d1);
    printf("Nhap a2: ");scanf("%f", &a2);
    printf("Nhap b2: ");scanf("%f", &b2);
    printf("Nhap c2: ");scanf("%f", &c2);
    printf("Nhap d2: ");scanf("%f", &d2);
    printf("Nhap a3: ");scanf("%f", &a3);
    printf("Nhap b3: ");scanf("%f", &b3);
    printf("Nhap c3: ");scanf("%f", &c3);
    printf("Nhap d3: ");scanf("%f", &d3);
    D = (a1 * b2 * c3)+(b1 * c2 * a3)+(c1 * a2 * b3)-(a3 * b2 * c1)-(b3 * c2 * a1)-(c3 * a2 * b1);
    printf("D: %0.2f\n", D);
    Dx = (d1 * b2 * c3)+(b1 * c2 * d3)+(c1 * d2 * b3)-(d3 * b2 * c1)-(b3 * c2 * d1)-(c3 * d2 * b1);
    printf("Dx: %0.2f\n", Dx);
    Dy = (a1 * d2 * c3)+(d1 * c2 * a3)+(c1 * a2 * d3)-(a3 * d2 * c1)-(d3 * c2 * a1)-(c3 * a2 * d1);
    printf("Dy: %0.2f\n", Dy);
    Dz = (a1 * b2 * d3)+(b1 * d2 * a3)+(d1 * a2 * b3)-(a3 * b2 * d1)-(b3 * d2 * a1)-(d3 * a2 * b1);
    printf("Dz: %0.2f\n", Dy);
     x = Dx/D;
     y = Dy/D;
     z = Dz/D;
    printf("An X: %0.2f\n", x);
    printf("An Y: %0.2f\n", y);
    printf("An Z: %0.2f\n", z);
}

