#include <stdio.h>
int main()
{
    struct demo
    {
        int i;
        float f;
        double d;
        
    };
    printf("%d \n", sizeof(struct demo));
    
    return 0;
}