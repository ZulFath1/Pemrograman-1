#include<stdio.h>
int main()
{
        float A,B,c,d;
        A=400000; 
        B=350000;
        c=0.13;
        d=0.21;
        printf("harga sepatu A adalah %0.f\n",A);
        printf("harga sepatu B adalah %0.f\n",B);
        float satu=A-(A*c);
        float dua=B-(B*d);
        printf("sepatu A mendapat diskon %2.0f%% sehingga hasilnya menjadi %0.f\n",c*100,satu);
        printf("sepatu B mendapat diskon %2.0f%% sehingga hasilnya menjadi %0.f",d*100,dua);
        return 0;
}