#include <stdio.h>
int main() 
{
    float a,b,i,j,x,y;
    printf("Input nilai woiiii: \n");
    scanf("%f %f %f %f %f %f",&a,&b,&i,&j,&x,&y);
    printf("Output: %.3f\n", ((a-b)*i)/j-(x+y));
    //20 3 4 12 5 9 atau 12 2 10 4 3 14 
    return 0;   
}