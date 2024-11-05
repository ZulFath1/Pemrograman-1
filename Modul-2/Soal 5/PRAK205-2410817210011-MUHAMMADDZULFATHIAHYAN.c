#include <stdio.h>
#include <math.h>
int main() 
{
    float tihang,singgang;
    printf("Masukkan nilai tinggi dan miring\n");
    scanf("%f",&tihang);
    scanf("%f",&singgang);
    //40 41 dan 16 65
    printf("Alas = %.0f cm\n",sqrt((singgang*singgang)-(tihang*tihang)));
    printf("Tinggi = %.0f cm\n",tihang);
    printf("Keliling = %.0f cm\n",tihang+(sqrt((singgang*singgang)-(tihang*tihang)))+singgang);
    printf("Luas = %.0f cm^2\n",0.5*(sqrt((singgang*singgang)-(tihang*tihang)))*tihang);

    return 0;
}