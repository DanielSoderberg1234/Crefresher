#include <stdio.h>

int main(void)
{
    int n; 
    printf("Please enter a number: ");
    scanf("%d",&n); 
    for(int i=1; i<=n; i++)
    {   
        int sq = i*i; 
        if(sq%2==0)
            printf("%d\n",sq); 
    }
        
    return 0; 
}