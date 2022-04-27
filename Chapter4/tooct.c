#include <stdio.h>

int main(void)
{
    int d; 
    printf("Enter a number between 0 and 32767:+\n"); 
    scanf("%d",&d); 
    int i = d%8; 
    d = d/8; 
    int j = d%8; 
    d = d/8; 
    int k = d%8; 
    d = d/8; 
    int l = d%8; 
    d = d/8; 
    int m = d%8; 
    printf("%d%d%d%d%d",m,l,k,j,i); 
    return 0;
}