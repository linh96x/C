#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20][20],i,j,m =3,n  = 3;
   //printf("nhap hang m: ");scanf("%d",&m);
   //printf("nhap cot n: ");scanf("%d",&n);
    //ma tran A
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            printf("A[%d][%d] = ", i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    printf("Ma tran A: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%3d", a[i][j]);
        printf("\n");
    }
    //In ra cac so hang chan cot le
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        if(a[i][0]%2==0 && a[0][j]%2!=0)
        {
            printf("%7d", a[i][j]);
        }
    }
}










































/*int main()
{
    int a[10] = {10,1,2,3,4,5,6,7,8,9},max,min,i;
    max = min = a[0];//a[0]=0
    for(i=0;i<10;i++)
    {
        if(max<a[i])
            max = a[i];
        if(min>a[i])
            min = a[i];
    }
    printf("Max: %d, Min: %d", max,min);
}*/
