#include<stdio.h>
int main()
{
    int a,b,c;
    printf("varibael a bernilai ");
    scanf("%d",&a);
    printf("variabel b bernilai ");
    scanf("%d",&b);
    printf("variabel c bernilai ");
    scanf("%d",&c);
    //a4 b8 c3

    printf("Apakah a sama dengan b ? jawabannya adalah %d\n", (a == b) ? 1 : 0);
    printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n", (b > c) ? 1 : 0);
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d\n", (a != c) ? 1 : 0);
    
    return 0;
}