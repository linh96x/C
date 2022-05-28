#include<conio.h>
#include<stdio.h>
#include<string.h>
/*int main()
{
    char a = ' ';
    printf("%d", a);//in ra ma ACSII
    printf("\n|%c|", a);
    char str[13]="Linh dep zai";
    printf("\n%s", str);
}*/
/*int main()
{
    char a;
    scanf("%c", &a);
    printf("%d", a);//in ra ma ACSII
    printf("\n|%c|", a);
    char str[13]="Linh dep zai";
    printf("\n%s", str);
}*/
int main()
{
    char a = getchar();
    printf("%d", a);//in ra ma ACSII
    printf("\n%c", a);
    char str[13];//="Linh dep zai";
    fflush(stdin);//xoa bo dem
    gets(str);
    printf("\n%s", str);
    return 0;
}
