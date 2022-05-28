#include<stdio.h>
int main()
{/*
    cau lenh lua chon long nhau
    vong lap long nhau
    vong lap ket hop cau lenh lua chon
    lenh break; continue.*/
    int i , j, count = 0;
    i = 100; j = 200;
    /*if( i>0)
    {
        if(j>0)
            printf("\ni,j cung > 0");
    }*/
    //in ra ma tran 3x3
    /*for(i = 0; i<3;i++)
    {
        for(j = 0; j <3;j++)
        {
            printf("%8d", count++);
        }
        printf("\n\n\n");
    }*/
    for( i = 0; i<=10 ; i++)
    {
         if(i%2 == 0)
           continue;
            printf("\ni = %d", i);
    }
    //printf("\ni = %d", i);
}
