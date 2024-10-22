#include<stdio.h>
int main()
{
    float a,b,x,y;
    a=9;
    b=6;
    x=10;
    y=7;
    printf("variabel a bernilai %.0f\n", a);
    printf("variabel b bernilai %.0f\n", b);
    printf("variabel x bernilai %.0f\n", x);
    printf("variabel z bernilai %0.f\n", y);
    float iwak=(a+b)*x/y;
    printf("hasil dari a ditambah b dikali x dibagi y adalah %0.2f", iwak);
    return 0;
}