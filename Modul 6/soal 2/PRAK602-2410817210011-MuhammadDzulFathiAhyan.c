#include<stdio.h>
int main()
{ 
    int ruang; 
    scanf("%d", &ruang); 
    int zetsu_putih_raaakh[ruang]; 
    for(int i = 0; i < ruang;i++)
    { 
        scanf("%d", &zetsu_putih_raaakh[i]); 
    } 
    for(int i = 0; i < ruang; i++)
    { 
        printf("%d ",(zetsu_putih_raaakh[i])*(i + 1)); 
    } 
    return 0; 
}