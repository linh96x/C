#include<stdio.h>
int main()
/* toan tu toan hoc: + - * / ++ --
toan tu so sanh: == != > < <= >=
toan tu logic: && // !
toan tu gan: = += *= -= /= %= */

{
    int a = 100, b = 200;
    int c, d;
    c = a/b;
    c = ++a;//a = a + 1;
    a = 100;
    d = a++;
    a == b;
    printf("c = %d", c);
    printf("\nd = %d",d);
    a = a+b;
    a+=b;
    return 0;

}
