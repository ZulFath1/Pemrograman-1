#include <stdio.h>

int main()
{    
    int nilai;
    printf("Masukkan nilai 0-100: ");
    scanf("%d", &nilai);
    if (nilai < 0 || nilai >100) {printf("Nilai tidak valid");}
    else if (nilai >= 80) {printf("A");}
    else if (nilai >= 70) {printf("B");}
    else if (nilai >= 60) {printf("C");}
    else if (nilai >= 50) {printf("D");}
    else if (nilai < 50) {printf("E");}
    return 0;
}