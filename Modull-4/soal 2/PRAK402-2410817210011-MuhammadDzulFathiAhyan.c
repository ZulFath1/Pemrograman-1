#include<stdio.h>
int main()
{
    int v;
    scanf("%d",&v);
    for (int i = 1; i <= v; i +=2) {printf("%d ",i);}
    if(v % 2 !=0) {v--;}
    printf("\n");
    for (int i = v; i >=2; i -=2) {printf("%d ",i);}
    return 0;
}