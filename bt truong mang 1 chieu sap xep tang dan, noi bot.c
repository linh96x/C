#include<stdio.h>
#include<conio.h>
int main()
{
    //mang 1 chieu.
    int a[50],i,n,j;
    printf("Nhap n: ");scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("Nhap A[%d] = ", i+1);
        scanf("%d", &a[i]);
    }
    printf("Mang A: \n");
    for(i=0;i<n;i++)
        printf("%4d", a[i]);
    //sap xep tang dan
    int Soxapxep = 0;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                Soxapxep = a[i];
                a[i]=a[j];//hoan vi 2 so
                a[j]=Soxapxep;
            }
        }
    }
    printf("\nMang A da sap xep: \n");
    for(i=0;i<n;i++)
        printf("%4d", a[i]);
}
