#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<string>//danh cho char
//Viet chuong trinh tim uoc chung lon nhat va boi so chung nho nhat cua 2 so nguyen m,n.In ra UCLN va BCNN.
int main()
{
    int m,m1,n,n1;
    printf("Nhap m: ");scanf("%d", &m);
    printf("Nhap n: ");scanf("%d", &n);
    m1 = m; n1 = n;
    while( m != n)
    if(m>n)
    {
        m = m - n;
    }
    else
    {
        n = n - m;
    }
    printf("UCLN: %d\n", m);
    printf("BCNN: %d", (m1*n1)/m);
    getch();
}
