#include<stdio.h>
#include<conio.h>
#include<math.h>
/*nhap so tu nhien n sau do in ra cac so chan nho hon n va cac so le nho hon n.*/
/*int main()
{
    int i=0,y=0,n;
    printf("Nhap n: ");scanf("%d", &n);
    printf("cac so chan nho hon n:\n");
    while(i < n)
       {
           while(i%2==0){
                     i++;
                 }

           i++;
       }
       printf("\ncac so le nho hon n:\n");
        while(y < n)
        {
            while(y % 2 != 0)
                {
                    printf("%d\t", y);
                    y++;
                }
            y++;
        }
}*/
/*nhap so tu nhien n roi tinh tong n S = 1+2+...+n*/
/*int main()
{
    int i=0,n,S=0;
    printf("Nhap n: ");scanf("%d", &n);
    while( i <= n)
    {
        S = S + i;i++;

    }
    printf("Tong S: %d", S);
}*/
/*nhap so tu nhien n roi tinh tong S = 1 + 1/2 +1/3 + ...1/n*/
/*int main()
{
    float i=1,S=0,n;
    printf("Nhap n: ");scanf("%f", &n);
    while( i <= n)
    {
        S = S + 1/i;
        i++;
    }
    printf("Tong S: %0.3f", S);
}*/
/*Nhap vao 1 o tu nhien n roi tinh:
a)  S = tong cac so tu nhien khong lon hon n.
b)  S1 = tong cac so tu nhien le khong lon hon n.
c)  S2 = tong cac so tu nhien chan khong lon hon n.*/
/*int main()
{
    int i=0,n,S=0,S1=0,S2=0,y=0,z=0;
    //phan a
    printf("Nhap n: ");scanf("%d", &n);
    while( i <= n)
    {
        S = S + i;
        i++;
    }
    printf("Tong cac so tu nhien khong lon hon n: %d\n", S);
    //phan b
    while( y<=n)
    {
        while( y%2!=0)
        {
            S1 = S1+y;y++;
        }
        y++;
    }
    printf("Tong cac so tu nhien le khong lon hon n: %d\n", S1);
    //phan c
    while( z<=n)
    {
        while( z%2==0)
        {
            S2 = S2+z;z++;
        }
        z++;
    }
    printf("Tong cac so tu nhien chan khong lon hon n: %d\a", S2);

}*/
/*Nhap so nguyen duong n va tinh tong: S = 1 + 1.2 + 1.2.3 + n*/
/*int main ()
{
    int n,s,i,j,m;
    printf("Nhap n: ");scanf("%d", &n);
    // S = 1! +...+n!
    i = 1; s = 0;
    while(i<=n)
    {
        //1!,2!,3!,4!,...,n!
        j = 1; m = 1;
        while(j<=i)
        {
           m *= j; j++;
        }
        s += m;
        i++;
    }
    printf("Tong S: %d", s);
}*/
/*Nhap so tu nhien n roi tinh tong cac so tu nhien khong lon hon n va chia het cho 7*/
/*int main ()
{
    int n,s,i,j;
    printf("Nhap n: ");scanf("%d", &n);
    s=0;i=0;
    while(i<=n)
    {
        while(i%7==0)
        {
            s += i;
            i++;
        }
        i++;
    }
    printf("Tong S: %d", s);
}*/
/*Nhap so tu nhien n roi liet ke cac uoc so cua no.So do bao nhieu uoc*/
/*int main()
{
    int n,i;
    int uoc = 0;
    printf("Nhap n:");scanf("%d", &n);
    printf("Cac uoc so: ");
    for(i =1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d, ", i);
            uoc++;
        }
    }
    printf("\nCo tong so %d uoc so.\n",uoc);
}*/
/*Viet chuong trinh tim uoc chung lon nhat va boi so chung nho nhat cua 2 so nguyen a,b*/
/*int main()
{
    int a,m,n,b;
    printf("Nhap a: ");scanf("%d", &a);
    printf("Nhap b: ");scanf("%d", &b);
    m =a;n=b;
    while( a != b)
    if(a>b)
    {
        a = a - b;
    }
    else
    {
        b = b - a;
    }
    printf("UCLN: %d\n", a);
    printf("BCNN: %d", (m*n)/a);
}*/
/*Viet chuong trinh kiem tra so nguyen to*/
/*int main()
{
    int i,n,s=0;
    printf("Nhap n: ");scanf("%d", &n);
    if(n<2)
    {
        printf("%d khong la so nguyen to.", n);
    }
    i=1;
    while(i<=n)
    {
        if(n%i==0)
        {
            s++;
        }
        i++;
    }
    if(s>2)
    {
        printf("%d khong la so nguyen to.", n);
    }
    else
    {
        printf("%d la so nguyen to.", n);
    }
}*/
/*viet chuong trinh phan tich 1 nguyen thanh cac thua so nguyen to*/
/*int main()
{
    unsigned int n;
    printf("nhap so n > 1: ");scanf("%d", &n);
    if(n < 2)
        printf("Nhap n > 1.");
    else
    {
        unsigned int i = 2;
        printf("ket qua = ", n);
        while(n > 1)
        {
            if(n % i == 0)
            {
                printf("%d", i);
                if(n != i)
                {
                    printf("x");
                }
                n /= i;
            }
            else
            {
                i++;
            }
        }
    }
}*/
//viet chuong trinh in ra n so nguyen to
/*int main()
{
    int n;
    printf("Nhap n:");scanf("%d", &n);
    if(n<=0)
        printf("Nhap n > 0");
    else
    {
        int count = 0;
        int m = 2;
        while(1)
        {
            int mark = 1;
            int i;
            for(i = 2; i <= sqrt(m); i++)
            {
                if(m % i ==0)
                {
                    mark = 0;
                    break;
                }
            }
            if(mark == 1)
            {
                count++;//co them 1 so nguyen to
                printf("%d, ", m);
            }
            if(count >= n)
            {
                break;
            }
            m++;
        }
    }
}
*/
//tim so fibo thu n
/*int main()
{
    int n;
    unsigned long long f0 = 1;
    unsigned long long f1 = 1;
    unsigned long long fn = 0;
    printf("Nhap n >= 0: ");scanf("%d", &n);
    if(n<0)
        printf("Nhap n >= 0");
    else
    {
        int i;
        fn = f0;//thay fn = 1,xoa dong
        for(i=2;i<=n;i++)
        {
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
        }
        printf("So fibo thu %d: %lld\n",n ,fn);
    }
}*/
//so thuan nghich
/*
int main()
{
    long n;
    printf("Nhap n >0: ");scanf("%d", &n);
    long so = 0;
    long m = n;
    while(m > 0)
    {
        so = so*10 + m%10;
        m/=10;
    }
    if(so == n)
    {
        printf("%ld la so thuan nghich.\n", n);
    }
    else
    {
        printf("%ld la so khong thuan nghich.\n", n);
    }
}
*/
//tinh n!
/*int main()
{
    int i=1,n,s=1;
    printf("Nhap n > 0: ");scanf("%d", &n);
    if(n<=0)
        printf("Nhap n > 0.");
    else
    {
        while(i<=n)
        {
            s *= i;
            i++;
        }
    printf("%d! = %d", n, s);
    }
}*/
//2.15 tinh tong cac chu so
/*int main()
{
    int n,sum = 0;
    printf("Nhap n: ");scanf("%d", &n);
    if(n<0)
    {
        n *= -1;
    }
    while(n>0)
    {
        sum += n % 10;
        n /= 10;
    }
    printf("Tong cac chu so cua n: %d ", sum);
}*/
//2.16 liet ke cac so chinh phuong trong doan
/*int main()
{
    int m,n;
    printf("Nhap m < n: \n");
    scanf("%d%d", &m, &n);
    if(m >= 0 && m < n)
    {
        int s = sqrt(m);
        s = (s * s == m) ? s : s + 1;
        int e  = sqrt(n);
        int i;
        for(i = s; i<=e;i++)
        {
            printf("%d, ", i*i);
        }
    }
    else
        printf("Nhap lai.");
}*/
//2.17 kiem tra 2 so cung nhau hay khong
/*int main()
{
    int m,n;
    printf("Nhap 2 so m,n > 0: ");scanf("%d%d", &m,&n);
    if(m>0 && n>0)
    {
        //tim uoc chung lon nhat
        while(m != n)
        {
            if(m > n)
                m = m - n;
            else
                n = n - m;
        }
        //uoc chung m,n
        if(m == 1)
        {
            printf("Hai so co nguyen to cung nhau.");
        }
        else
        {
            printf("Hai so co nguyen to khong cung nhau.");
        }
    }
    else
        printf("Nhap lai.");
}*/
//2.18 tinh so PI
/*int main ()
{
    double a;
    printf("Nhap do chinh xac a: ");
    scanf("%;lf", &a);
    int k = 0;
    int signal = -1;
    double res = 0;
    double tg = 1.0 / (2 * k + 1);
    while(tg >= a)
    {
        tg = 1.0 / (2 * k + 1);
		res += -1 * signal * tg;
		signal *= -1;
		k++;
	}
	double PI = 4 * res;
	printf("PI = %0.8lf", PI);
}*/
//2.19 tinh e^x
/*int main()
{
    double a,x;
    printf("Nhap x va a: ");
    scanf("%lf%lf", &x, &a);
    long long Kgt = 1;
    int k = 0;
    double xmuK = 1;
    double kq = 0;
    double tam  = xmuK / Kgt;
    while(tam > a)
    {
        kq += tam;
        k++;
        xmuK *= x;
        Kgt *= k;
        tam  = xmuK / Kgt;
    }
    printf("e^%0.3lf = %lf", x, kq);
}*/











