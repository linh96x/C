#include<stdio.h>
#include<conio.h>
#include<math.h>
//day Fibonacci
int main()
{
    /*int n;
    long f0=1,f1=1,fn = 0;
    printf("Nhap n>=0: ");scanf("%d", &n);
    int i;
    fn = f0;
    for(i=2;i<=n;i++)
    {
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
    }
    printf("So Fibonacci thu %d la: %ld\n",n,fn);*/
    //tinh tong
    int n,f0 = 0,f1 =1,fn,i;
    printf("Nhap do dai day Fibonacci: ");scanf("%d", &n);
    {
            printf("Day Fibonacci: %d",f1);
            for(i = 2;i<=n;i++)
            {
                fn = f0 + f1;
                printf(" %d", fn);
                f0 = f1;
                f1 = fn;
            }
    }
}
