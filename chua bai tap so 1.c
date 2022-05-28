#include<stdio.h>
/*int main(int argc, char** argv)
{
    int a,b,c,d;
    printf("nhap a,b,c,d: \n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int max = (a > b) ? a : b;
    max = (max > c) ? max : c;
    max = (max > d) ? max : d;
    if( a == b && b == c && c == d)
    {
        printf("khong co gia tri lon nhat.\n");
    }
    else
    {
        printf("Gia tri lon nhat trong 4 so la: %d", max);
    }

}*/
int main(int argc, char** argv)
{
    float a,b,c;
    printf("Nhap canh: ");scanf("%f%f%f", &a, &b, &c);
    if(a > 0 && b > 0 && c > 0)
    {
    //c1:
    if(abs(a -c) < b && b < (a+c))
    {
        printf("Ba so lap thanh mot tam giac!\n\a");
    }
    else{
        printf("ba so khong tao thanh 1 tam giac!\n");
    }
    //c2:
    if(a < (b+c) &&b < (a +c) && c < (a+c))
    {
        printf("Ba so lap thanh mot tam giac!\n\a");
    }
    }
    else{
        printf("Nhap vao 3 so duong!");
    }

}


