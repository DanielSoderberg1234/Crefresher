#include <stdio.h>

int main(void)
{
    int m,n; 
    printf("Please enter two integer numbers: ");
    scanf("%d%d",&n,&m);

    while(n != 0)
    {
        int r = m%n; 
        m = n; 
        n = r; 
    } 
    printf("Greates common divisor: %d",m);
    return 0; 
}