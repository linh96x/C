//nhap ma tran gom n hang n cot,.  Tim max min = ?
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20][30],i,j,m,n,max,min,tong = 0,b=0;
    printf("Nhap so hang = ");scanf("%d", &m);
    printf("Nhap so cot = ");scanf("%d", &n);
    //nhap du lieu trong hang va cot
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            printf("A[%d][%d]  = ", i+1,j+1);scanf("%d", &a[i][j]);
        }
        //ma tran
        printf("Ma tran: \n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%3d", a[i][j]);
            }
            printf("\n");
        }
        //tim max min
        max = min = a[0][0];
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
        {
            if(max<a[i][j])
                max = a[i][j];
            if(min>a[i][j])
                min = a[i][j];
        }
    printf("max = %d, min = %d \n",max,min);
    //tinh tong va trung binh cong cac so
    /*for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            tong = tong + a[i][j];
            b++;//b = mau de chia tbc
        }
    }
    printf("Tong: %d\n", tong);
    printf("Trung binh cong: %0.3f\n", ((float)tong/b));
    //ma tran dao cua A:
    for(i=m-1;i>=0;i--)
        {
            for(j=n-1;j>=0;j--)
            {
                printf("%3d", a[i][j]);
            }
            printf("\n");
        }*/
}
