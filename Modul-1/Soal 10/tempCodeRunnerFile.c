#include<stdio.h>
int main()
{
    float alas, tinggi, miring, keliling, luas;
    alas=5;
    tinggi=12;
    miring=sqrt(alas*alas+tinggi*tinggi);
    keliling=alas+tinggi+miring;
    luas=(alas*tinggi)/2;
    printf("diketahui :\n");
    printf("alas = %.0f cm\n",alas);
    printf("tinggi = %.0f cm\n\n",tinggi);
    printf("jawaban :\n");
    printf("sisi A = %0.f cm \n", tinggi);
    printf("sisi B = %0.f cm \n", miring);
    printf("sisi C = %0.f cm \n", alas);
    printf("keliling = %0.f cm \n", keliling);
    printf("luas = %0.f cm", luas);
    return 0;
}