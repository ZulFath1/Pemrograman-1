#include<stdio.h>
int main()
{
    float phi, keliling, putaran, totalj, jari;
    phi=3.14;
    putaran=5;
    totalj=14;
    keliling=totalj/putaran;
    printf("diketahui : \n");
    printf("Pak Dengklek mengelilingi taman = %0.f putaran\n",putaran);
    printf("jarak tempuh Pak Dengkle = %.0f Kilometer \n\n",totalj);
    printf("jawaban :\n");
    jari=keliling/(2*phi);
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %0.2f kilometer",jari);
    return 0;
}