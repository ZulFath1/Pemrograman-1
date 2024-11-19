#include <stdio.h>
int main()
{
    int input, hari, jam, menit, detik;
    printf("");
    scanf("%d",&input);
    hari =(input / 86400);
    jam = (input % 86400) / 3600;
    menit = (input % 3600) / 60;
    detik = (input % 60);
    if (hari > 0){printf("%d hari %02d:%02d:%02d\n", hari, jam, menit, detik);}
    else {printf("%02d:%02d:%02d\n", jam, menit, detik);}
    return 0;
}