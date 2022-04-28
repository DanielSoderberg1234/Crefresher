#include <stdio.h>

int main(void)
{
    int i;
    while(1)
    {
        printf("Please enter a value (0-9):"); 
        scanf("%d",&i); 
        if(i==1)
            goto case1;
        if(i==2)
            goto case2; 

    }

    case1:
    printf("You entered 1");

    case2:
    printf("You entered 2"); 
    return 0; 
}