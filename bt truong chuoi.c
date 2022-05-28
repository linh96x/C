//chuoi
#include<conio.h>
#include<stdio.h>
#include<string.h>
//nhap chuoi va in ra do dai cua chuoi
/*int main()
{
    char chuoi[255];
    int dodai;
    printf("Nhap chuoi: ");gets(chuoi);
    dodai = strlen(chuoi);
    printf("Chuoi vua nhap: ");puts(chuoi);
    printf("Co do dai %d", dodai);
}*/
//nhap chuoi ho dem,chuoi ten ghep thanh chuoi ho va ten
int main()
{
    char ho[255];
    char ten[255];
    printf("Nhap ho: ");gets(ho);
    printf("Nhap ten: ");gets(ten);
    strcat(ho,ten);
    puts("Ho va ten: ");
    puts(ho);
}
//chuoi dao nguoc
/*int main()
{
   char chuoi[255];
   int i;
   puts("Nhap chuoi: ");
   gets(chuoi);
   puts("Chuoi dao nguoc: ");
   for(i=strlen(chuoi)-1;i>=0;i--)
   {
       printf("%c", chuoi[i]);
   }
}*/
//in moi tu tren 1 dong
/*int main()
{
    char chuoi[30];
    puts("Nhap chuoi: ");
    gets(chuoi);
    puts("In moi ky tu tren 1 dong: ");
    for(int i=0;i<strlen(chuoi);i++)
    {
        if(chuoi[i] != 32)//32 = space
            printf("%c", chuoi[i]);
        else
            printf("\n");
    }
}*/















