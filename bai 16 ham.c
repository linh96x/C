//Bai 16 ham fuction
#include<stdio.h>
int max(int, int);
int tong(int, int);
int max(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    return b;
}
int tong(int a, int b)
{
    return a+b;
}
void hieu(int a, int b)
{
    printf("%d - %d = %d", a, b, a-b);
}
int main()
{
    int a = 200, b = 600;
    //printf("max cua 200, 600: %d", max(200,600));
    hieu(a,b);
    return 0;
}
