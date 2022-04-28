#include <stdio.h>

int main(void)
{
    int d; 
    printf("Please enter a value between 0-5: \n"); 
    scanf("%d",&d); 

    switch (d)
    {
    case 5 :
        printf("5\n");
        printf("Banana\n");
        break;
    case 4 :
        printf("4\n");
        printf("Banana\n");
        break;
    case 3 :
        printf("3\n");
        printf("Banana\n");
        break;
    case 2 :
        printf("2\n");
        printf("Banana\n");
        break;
    case 1 :
        printf("1\n");
        printf("Banana\n");
        break;
    default:
        break;
    }
    return 0; 
}