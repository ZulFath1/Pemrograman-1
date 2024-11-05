#include<stdio.h>
int main()
{
    float a, b;
    printf("Masukkan Nilai Pertama :");
    scanf("%f",&a);
    printf("Masukkan Nilai Kedua :");
    scanf("%f",&b);
    //14 dan 20.5
    printf("Hasil dari penjumlahan nilai pertama \"%.0f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"",a,b,a+b);
    
    float c, d;
    printf("\nMasukkan Nilai Pertama :");
    scanf("%f",&c);
    printf("Masukkan Nilai Kedua :");
    scanf("%f",&d);
    //0.45 dan 99.5
    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"",c,d,c+d);

    return 0;
}