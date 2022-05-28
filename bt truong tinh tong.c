#include<stdio.h>
#include<conio.h>
#include<math.h>
//tinh tong 1+2+3+...+n
/*int main()
{
	int i = 1,n;
	long S = 0;
	printf("Nhap n: ");scanf("%d", &n);

	while(i <= n)
	{
		S += i;
		i++;
	}
	printf("S: %ld",S);
}*/
//tinh tong:1+3+5+7+...+n
/*int main()
{
	int i = 1, n;
	long S  = 0;
	printf("Nhap n: ");scanf("%d", &n);

	while(i <= n)
	{
		S = S +(2*i-1);
		i++;
	}
	printf("S: %ld ",S);
}*/
//tinh tong 1+4+7+10+...+n
/*int main()
{
	int i = 1, n;
	long S  = 0;
	printf("Nhap n: ");scanf("%d", &n);

	while(i <= n)
	{
		S = S +(3*i-2);
		i++;
	}
	printf("S: %ld ",S);
}*/
//tinh tong 1+5+9+13+...+n
/*int main()
{
	int i = 1, n;
	long S  = 0;
	printf("Nhap n: ");scanf("%d", &n);

	while(i <= n)
	{
		S = S +(4*i-3);
		i++;
	}
	printf("S: %ld ",S);
}*/
//tinh S = 0+2+4+6+...
/*int main()
{
	int i, n;
	long S;
	S = 0;
	i = 1;
	printf("Nhap n: ");scanf("%d", &n);

	while(i <= n)
	{
		S = S +(2*i-2);
		i++;
	}
	printf("S: %ld ",S);
}*/
//S = 1 + 1/2 + 1/3 +....
/*int main()
{
	float i = 1,n,S = 0;
	printf("Nhap n: ");scanf("%f", &n);
	while(i <= n)
	{
		S += 1/i;
		i++;
	}
	printf("S: %2.2f ",S);
}*/
// S = 1! + 2! + 3!
/*
int main()
{
	int i, j, m, n, s;
	printf("Nhap n: ");scanf("%d", &n);
	i=1; s = 0;
	while(i <= n)
	{
	    j = 1; m =1;
	    while(j<=i)
        {
            m *= j;
            j++;
        }
        s += m;
        i++;
	}
	printf("S: %d", s);
}
*/
//tinh tong S = 2 + 5 + 8 +....
/*int main()
{
    int S = 0,i  = 1,n;
    printf("Nhap n > 0: ");scanf("%d", &n);
    while(i<n)
    {
        S += (3*i-1);
        i++;
    }
    printf("Tong S: %d", S);
    getch();
}*/
//tinh tong S = 2 + 6 + 10 +....
int main()
{
    int S = 0,i  = 1,n;
    printf("Nhap n > 0: ");scanf("%d", &n);
    while(i<n)
    {
        S += (4*i-2);
        i++;
    }
    printf("Tong S: %d", S);
}
