#include <stdio.h>

int main(void)
{
    printf("Enter a 24 hour time:\n"); 
    int h,m; 
    scanf("%d:%d",&h,&m); 

    if(h>0 && h<13)
    {
        printf("Equivalent 12 hour time: %d:%d am\n",h,m);
    }
    else if (h>13 && h<=23)
    {
        printf("Equivalent 12 hour time: %d:%d pm\n",h-12,m);
    }
    else
    {
        printf("Invalid time entered"); 
    }
    return 0; 
    
}