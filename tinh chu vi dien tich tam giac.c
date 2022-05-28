/* a,b,c la 3 canh cua tam giac neu(a+b>c)
chu vi = a+b+c
dien tich = can p^2(p-a)*(p-b)*(p-c)*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
 /*Nhap 3 so thuc x,y,z Kiem tra xem a,b,c co lap thanh 3 canh cua tam giac khong?
    neu co hay tinh chu vi va dien tich cua tam giac do*/
/*int main()
{
    float a,b,c,cv,p,s;
    printf("Nhap a,b,c: \n");scanf("%f%f%f", &a, &b, &c);
    if((a + b > c) && (b + c > a) && ( c + a > b ))
    {
        cv = a + b + c;
        p  = cv/2;
        s = sqrt(p*(p-a)*(p-b)*(p-c));
        printf("Chu vi: %0.2f", cv);
        printf("\nDien tich: %0.2f", s);
    }
    else
    {
        printf("Khong phai 3 canh tam giac");
    }


}*/
//giai va bien luan phuong trinh bac 1
/*int main()
{
    float a,x,b;

    printf("Nhap a:");scanf("%f", &a);
    printf("Nhap b:");scanf("%f//", &b);
    if(a!=0)
    {
        x = -b/a;
        printf("Phuong trinh co 1 nghiem: %0.2f", x);

    }
    else if(a == 0 && b == 0)
    {
        printf("Phuong trinh vo so nghiem.");
    }
    else
    {
        printf("Phuong trinh vo nghiem.");
    }
}*/
int main()
{
    float x,y,z;
    printf("Nhap x,y,z: \n");scanf("%f%f%f", &x, &y, &z);
    if(x+y>z && y+z>x && z+x>y)
    {
        printf("La 3 canh tam giac.\n");
        if(x*x + y*y == z*z || z*z + y*y == x*x || x*x + z*z ==y*y)
        {
            printf("Tam giac vuong.");
        }
        else if(x==y && y==z)
        {
            printf("Tam giac deu.");
        }
        else if(x==y && y!=z || y==z && z!=x || z==x && x!=y)
        {
            printf("tam giac can.");
        }
    }
    else
    printf("Khong la tam giac");
}
