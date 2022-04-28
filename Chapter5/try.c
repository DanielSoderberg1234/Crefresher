#include <stdio.h>

int main(void)
{
    int a = 3; 
    int b = 2; 
    if(a < b)
    {
        if(b > 10)
            printf("b=%d\n",b); 
    }
    else
    {
        printf("a=%d\n",a);
    }
    return 0; 
}