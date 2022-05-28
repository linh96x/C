#include<stdio.h>
int main(int argc, char** argv)
{
    /*int sum = 0, i = 100;
    do//Lap it nhat 1 lan
    {
        sum+=i;
        ++i;
    }
    while( i < 10  );
    printf("Sum = %d\n", sum);*/
    /*int value;
    do {
        printf("Nhap vao 1 gia tri > 0: ");scanf("%d", &value);
    }
    while( value <= 0);
    printf("Gia tri thoa man = %d\n", value);*/

    int sum = 0, i = 1,n;
        printf("n: ");scanf("%d", &n);
        do
        {
            sum = sum + i;
            i++;
        }
        while( i <= n );
            printf("sum = %d\n", sum);
    return 0;
}
