#include <stdio.h>
#include <conio.h>
/*nhap so tu nhien n sau do in ra cac so chan nho hon n va cac so le nho hon n.*/
/*int main()
{
    int i = 0,y = 0,n;
    printf("Nhap n: ");scanf("%d", &n);
    printf("Cac so chan nho hon n: \n");
    while(i<n)
    {
        while(i%2 == 0)
        {
             printf("%3d", i);
             i++;
        }
        i++;
    }
    printf("\nCac so le nho hon n: \n");
    while(y<n)
    {
        while(y%2 != 0)
        {
             printf("%3d", y);
             y++;
        }
        y++;
    }
}*/
//Tinh tien dien 0-50,1600|50-100,1700|100-200,1800|>200,1900
/*int main()
{
    int cu,moi,so,tien;
    printf("Nhap so dien cu:");scanf("%d", &cu);
    printf("Nhap so dien moi:");scanf("%d", &moi);
    so = moi - cu;
    if(so<50) tien = so*1600;
    else if(so <100) tien = 50*1600+(so-50)*1700;
    else if(so<200) tien = 50*1600+50*1700+(so-100)*1800;
    else if(so>200) tien = 50*1600+50*1700+100*1800+(so-200)*1900;
    printf("So tien dien phai dong truoc thue: %d", tien);
    printf("\nThue: %0.2f",(float)tien*1/10);
    printf("\nSo tien dien phai dong sau thue thue: %0.2f",(float)(tien + tien/10));
    getch();
}*/
//Tim tam giac
/*int main()
{
    int a,b,c;
    printf("Nhap canh a: ");scanf("%d", &a);
    printf("Nhap canh b: ");scanf("%d", &b);
    printf("Nhap canh c: ");scanf("%d", &c);
    if(a+b>c && b+c>a && a+c>b)
    {
        printf("Day la 3 canh cua 1 tam giac.\n");
        if((a*a+b*b==c*c) || (a*a+c*c==b*b) || (b*b+c*c==a*a))
            printf("Day la tam giac vuong.");
        else if(a!=b && b!=c && a!=c)
            printf("Day la tam giac thuong.");
        else if(a == b && b == c && c == a)
            printf("Day la tam giac deu.");
        else if(a == b || b == c || c == a)
            printf("Day la tam giac can.");

    }
    else
        printf("Khong phai 3 canh cua 1 tam giac.");
}*/
//Giai phuong trinh bac 1 ax + b = 0
/*int main()
{
    int a,b,x;
    printf("Nhap a: ");scanf("%d", &a);
    printf("Nhap a: ");scanf("%d", &b);
    x = -b/a;
    if(a == 0 && b == 0)
        printf("Phuong trinh vo so nghiem.");
    else if(a == 0 && b != 0)
        printf("Phuong trinh vo nghiem.");
    else
        printf("Phuong trinh co 1 nghiem x = %d", x);
}*/
//Giai phuong trinh bac 2 ax^2 + bx + c = 0
/*int main()
{
    int a,b,c,D;
    printf("Nhap a:");scanf("%d", &a);
    printf("Nhap b:");scanf("%d", &b);
    printf("Nhap c:");scanf("%d", &c);
    if(a == 0)
        if( b == 0 &&  c == 0 )
            printf("Phuong trinh vo so nghiem.");
        else if(b == 0 &&  c != 0)
            printf("Phuong trinh vo nghiem.");
        else
            printf("Phuong trinh co 1 nghiem x = %d", -c/b);
    else
    {
        D = b*b-4*a*c;//D  =delta
        if(D < 0)
            printf("Phuong trinh vo nghiem.");
        else if( D == 0)
            printf("Phuong trinh co nghiem kep x1 = x2 = %d", -b/2*a);
        else
            printf("Phuong trinh co  2 nghiem x1 = %d \n x2 = %d",(-b+sqrt(D))/(2*a),(-b-sqrt(D))/(2*a));
    }
}*/
//In ra cac so <600 chia 8 du 2
/*int main()
{
    int i = 100,n = 600;
    printf("cac so <600 chia 8 du 2: \n");
    while(i<n)
    {
        if(i%8==2)
            printf("%7d", i);
        i++;
    }
    getch();
}*/
//Tinh tong
/*int main()
{
    int S = 0,i = 0,n;
    printf("Nhap n: ");scanf("%d", &n);
    //1+2+3+n
    while(i<=n)
    {
        S += i;
        i++;
        printf("%3d", i);
    }
    printf("\nS: %d", S);
    //2+4+6+8+n
    while(i<=n)
    {
        S += 2*i;
        i++;
    }
    printf("\nS: %d", S);
    //3+6+9+12+n
    while(i<=n)
    {
        S += 3*i;
        i++;
    }
    printf("\nS: %d", S);
}*/
    //Tim so ngay trong 1 thang
    /*int main()
    {
        int thang;
        printf("Thang: ");scanf("%d", &thang);
        switch(thang)
        {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31 ngay");break;
        case 4: case 6: case 9: case 11:
            printf("30 ngay.");break;
        case 2:
            {
                int nam;
                printf("Nam: ");scanf("%d", &nam);
                if(nam%4==0 && nam%100!=0)
                    printf("29 ngay.");
                else
                    printf("28 ngay.");
                    break;
            }
        default:
            printf("Nhap lai.");
            break;
        }

}*/
//Nhap nam duong lich tim nam am lich
/*int main()
{
    int nam,can,chi;
    printf("Nhap nam Duong Lich: ");scanf("%d", &nam);
    can = nam%10;//canh,tan,nham,quy,giap,at,binh,dinh,mau,ky
    chi = nam%12;//than,dau,tuat,hoi,ti,suu,dan,mao,thin,ty,ngo,mui
    //2020
    printf("Nam Am Lich: ");
    switch(can)
    {
        case 0: printf("Canh");break;
        case 1: printf("Tan");break;
        case 2: printf("Nham");break;
        case 3: printf("Quy");break;
        case 4: printf("Giap");break;
        case 5: printf("At");break;
        case 6: printf("Binh");break;
        case 7: printf("Dinh");break;
        case 8: printf("Mau");break;
        case 9: printf("Ky");break;
    }
    printf(" ");
    switch(chi)
    {
        case 0: printf("Than");break;
        case 1: printf("Dau");break;
        case 2: printf("Tuat");break;
        case 3: printf("Hoi");break;
        case 4: printf("Ty");break;
        case 5: printf("Suu");break;
        case 6: printf("Dan");break;
        case 7: printf("Mao");break;
        case 8: printf("Thin");break;
        case 9: printf("Ty");break;
        case 10: printf("Ngo");break;
        case 11: printf("Mui");break;
    }
}*/
//Ma tran - mang 1 chieu
int main()
{
    int a[50],i,m;
    printf("Nhap chieu dai mang: ");scanf("%d", &m);
    for(i=0;i<m;i++)
    {
        printf("A[%d]: ",i+1);scanf("%d", &a[i]);
    }
    printf("Mang:\n");
    for(i = 0;i<m;i++)
    {
        printf("%3d", a[i]);
    }
}











