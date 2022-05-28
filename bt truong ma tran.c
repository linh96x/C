//nhap ma tran b cung cap tinh c = a + b, a-b,a*b,a/b
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20][30],i,j,m,n;
    printf("Nhap so hang = ");scanf("%d", &m);
    printf("Nhap so cot = ");scanf("%d", &n);
    //ma tran A
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            printf("A[%d][%d] = ", i+1,j+1);scanf("%d", &a[i][j]);
        }
        printf("Ma tran A: \n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%3d", a[i][j]);
            }
            printf("\n");
        }
    //ma tran B
    /*int b[20][30];
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    {
        printf("B[%d][%d]  = ", i+1,j+1);scanf("%d", &b[i][j]);
    }
    printf("Ma tran B: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%3d", b[i][j]);
        }
        printf("\n");
    }*/
    //ma tran C = a/b
    /*printf("Ma tran C = : \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%5.1f", ((float)a[i][j]/b[i][j]));
        }
        printf("\n");
    }*/
    //Tinh tong cac so nam tren duong cheo
    int Sc = 0;
    printf("\nDuong cheo chinh: ");
    for(i=0;i<m;i++)
    {
        printf("%3d ", a[i][i]);
        Sc += a[i][i];
    }
    printf("\nDuong cheo phu: ");
    int Sp = 0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j == n-i-1)
            {
                printf("%3d", a[i][j]);
                Sp += a[i][j];
            }
        }
    }
    printf("\nTong cac so tren duong cheo chinh: %d", Sc);
    printf("\nTong cac so tren duong cheo phu: %d", Sp);
    //tim max min tren duong cheo chinh duong cheo phu.
    //duong cheo chinh
    int Cmax = a[0][0], Cmin;
    for(i=0;i<m;i++)
    {
        if(Cmax < a[i][i])
            Cmax = a[i][i];
        if(Cmin > a[i][i])
            Cmin = a[i][i];
    }
    printf("\nMax cua duong cheo chinh la: %d", Cmax);
    printf("\nMin cua duong cheo chinh la: %d", Cmin);
    int Pmax = a[0][0], Pmin;
    for(i=0;i<m;i++)
    {
        if (a[i][n - i - 1] > Pmax)
            Pmax = a[i][n - i - 1];
        if (a[i][n - i - 1] < Pmin)
            Pmin = a[i][n - i - 1];
    }
    printf("\nMax cua duong cheo phu la: %d", Pmax);
    printf("\nMin cua duong cheo phu la: %d", Pmin);
}
