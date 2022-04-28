#include <stdio.h>

int main(void)
{
    printf("Please enter a three digit code:\n"); 
    int d; 
    scanf("%d",&d); 

    switch (d)
    {
    case 229: printf("Albany\n"); break;
    case 404: printf("Atlanta\n"); break;
    default: printf("Area code not recognizd\n"); break;
    }
    return 0; 
}