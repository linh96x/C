#include<stdio.h>
#include<conio.h>
//tim 3 canh cua 1 tam giac trong 1 khoang
int main()
{
    int a,b,c,n;
    printf("Khoang chay tu 1 den: ");scanf("%d", &n);
    for(a = 1;a <=n;a++)
        for(b = 1;b<=n;b++)
            for(c = 1;c<=n;c++)
            {
                if ((a+b>c)&&(a+c>b)&&(b+c>a))
                {
                    //if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(c*c+b*b==a*a))//Tam giac vuong
                    //if ((a==b)&&(b==c))//Tam giac can
                    //if ((a==b)||(b==c)||(c==a))//Tam giac deu
                    //if(a!=b && b!=c && c!=a)//Tam giac thuong
                    printf("\t[%d, %d, %d] \n", a,b,c);
                }
            }
}
