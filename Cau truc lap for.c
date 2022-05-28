#include<stdio.h>
int main()
{
    /*cau truc vong lap for:
    for( gia tri khoi tao; dieu kien lap; buoc nhay ){
    // noi dung can lap
    }
    trong do:
    -gia tri khoi tao chi duoc thuc hien 1 lan, truoc vong lap dau tien.
    -dieu kien lap la gia tri, bieu thuc co tinh dung sai.
    -buoc nhay la cach thay doi gia tri cua bien dieu kien.
    Cach thuc lap :
    1.Dau tien la buoc khoi tao gia tri cho bien lap (tuy chon).
    2.Sau do dieu kien lap se duoc kiem tra, neu thoa man thi thuc hien
    than vong lap va thuc hien buoc nhay.
    3.Thuc hien lap lai buoc 2 toi khi dieu kien lap khong con thoa man.
    -neu khuyet 3 thanh phan tren thi vong lap se tro thanh vong lap vo han.
    //su dung khi biet truoc so lan lap.
    VD: Sau tinh tong cac so nguyen duong tu 1 ->10:*/
    /*int i, sum = 0;
    for( i = 0; i< 10; i++ )
        {
        sum+=i;
        }
    printf("Sum = %d\n", sum);*/
    //VD: vong lap khuyet phan khoi tao gia tri
        /*int i =0,sum=0;
        for( ;i< 10; i++ )
        {
        sum+=i;
        }
    printf("Sum = %d\n", sum);*/
    /*VD vong lap khuyet phan khoi tao gia tri,
    phan buoc nhay dua vao than vong lap*/
    /*int i =0,sum=0;
        for( ;i< 10; )
        {
        sum+=i;
        i++;
        }
    printf("Sum = %d\n", sum);
    //Vd sau la vong lap vo han:*/
    /*int i =0,sum=0;
        for( ; ; )
        {
            if(i>=10)
                break;
        sum+=i;
        i++;
        }
    printf("Sum = %d\n", sum);*/
}
