#include <stdio.h>

int main(void)
{
    int d; 
    printf("Enter a three digit number: "); 
    scanf("%d",&d); 
    int i = d/100; 
    int j = (d-i*100)/10; 
    int k = (d-i*100)%10; 
    printf("i = %d\tj = %d\tk = %d\n",i,j,k);
    d = 100*k+10*j+i; 
    printf("Reversed: %d\n", d); 
    return 0; 
}