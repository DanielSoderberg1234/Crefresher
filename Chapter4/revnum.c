#include <stdio.h>

int main(void)
{
    int n; 
    printf("Please enter a two digit numner: \n"); 
    scanf("%d",&n); 
    int i = n/10; 
    int j = n%10; 
    n = j*10+i; 
    printf("The reversed number is: %d",n); 
    return 0; 
}