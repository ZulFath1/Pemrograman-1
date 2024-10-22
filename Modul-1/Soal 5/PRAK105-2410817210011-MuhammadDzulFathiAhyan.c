#include<stdio.h>
int main()
{
    int a,o,x,y;
    a=9;
    o=5;
    x=8;
    y=8;
    printf("variabel a bernilai %d\n",a);
    printf("variabel b bernilai %d\n",o);
    printf("variabel x bernilai %d\n",x);
    printf("variabel y bernilai %d\n",y);
    int hasil=(a%o)+(x%y);
    printf("total sisa hasil bagi dari a dibagi b dan x dibagi y adalah %d",hasil);
    return 0;
}