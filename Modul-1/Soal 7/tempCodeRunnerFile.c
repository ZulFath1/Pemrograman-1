#include<stdio.h>
int main()
{
    int a,b,c,d;
    a=4;
    b=5;
    c=7;
    d=85000;
    printf("diketahui:\n");
    printf("panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n",a,b,c);
    int keliling = a+b+c;
    printf("keliling tanah Pak Dengklek adalah %d\n",keliling);
    printf("harga tanah per meter adalah %d\n",d);
    printf("jawaban:");
    int total=keliling*d;
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d",total);
    return 0;
}