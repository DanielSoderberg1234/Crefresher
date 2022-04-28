#include <stdio.h>

int main(void)
{
    int days,start; 
    printf("Enter number of days in month: "); 
    scanf("%d",&days);
    printf("\n"); 
    printf("Enter starting day of the week (1=sun, 7=sat): "); 
    scanf("%d",&start);
    printf("\n");

    for(int i = 0; i<start; i++)
        printf("  "); 

    for(int i=start, j=1; j<=days; i++,j++)
    {
        printf("%2d ",j); 
        if(i%7==0)
            printf("\n");

    }
    return 0;
}