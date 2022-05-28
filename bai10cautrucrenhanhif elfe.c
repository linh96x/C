
#include<stdio.h>
#include<conio.h>
int main()
{
    int money;
    scanf("%d", &money);
    if(money >= 1000)
    {
        printf("Linh la trieu phu.");
    }
    else
    {
        printf("Linh khong phai la trieu phu.");
    }
    return 0;
}

