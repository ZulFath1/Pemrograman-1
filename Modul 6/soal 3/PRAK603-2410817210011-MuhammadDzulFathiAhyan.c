#include <stdio.h> 
int main()
{ 
    int r1, r2; 
    scanf("%d %d", &r1, &r2);
    int tabel1[r1], tabel2[r2];
    if(r1 != r2){printf("Jumlah tidak sama");return 1;} 
    for(int i = 0; i < r1; i++){scanf("%d", &tabel1[i]);} 
    for(int i = 0; i < r1; i++){scanf("%d", &tabel2[i]);}
    for(int i = 0; i< r1; i++){printf("%d ", tabel1[i] * tabel2[i]);} 
    return 0; 
}