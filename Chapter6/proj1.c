#include <stdio.h>

int main(void)
{
    int n,max=-10000; 
    do
    {
        printf("Enter a number: "); 
        scanf("%d",&n);
        if(n>max)
            max = n;  
    } while (n>0);
    printf("The largest number was: %d\n",max); 
    return 0; 
}