#include <stdio.h> 
int panjang_kalimat(char kalimat[])
{ 
    int panjang = 0; 
    while(kalimat[panjang] != '\0') panjang++; 
    return panjang; 
}
int main()
{ 
    int bintang = 0, hestek = 0; 
    char shikamaru[99]; 
    char musuhnya[99]; 
    scanf(" %[^\n]", shikamaru); 
    scanf(" %[^\n]", musuhnya); 
    if(panjang_kalimat(shikamaru) != panjang_kalimat(musuhnya))
    { 
        printf("Panjang kalimat berbeda, pesan palsu"); 
        return 1; 
    } 
    for(int i = 0; i < panjang_kalimat(shikamaru); i++)
    { 
        if(shikamaru[i] == ' ' && musuhnya[i] == ' '){continue;} 
 
        if(shikamaru[i] == musuhnya[i])
        { 
            printf("*"); 
            bintang++; 
        } 
        else
        { 
            printf("#"); 
            hestek++; 
        } 
    } 
    printf("\n* = %d \n", bintang); 
    printf("# = %d \n", hestek); 
    if(bintang >= hestek) printf("Pesan Asli"); 
    else printf("Pesan Palsu"); 
    return 0; 
} 