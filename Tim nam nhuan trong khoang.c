#include <stdio.h>
#include <conio.h>
int main ()
{
    int i,n;
    printf("Nhap n:");scanf("%d", &n);
    for(i = 0;i<=n;i--)
    {
        n = n-4;
        i++;
        printf("%7d", n);
    }
}
