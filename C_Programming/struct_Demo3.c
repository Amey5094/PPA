#include <stdio.h>
int main()
{

// we can add any number in pragma pack 1 or 2 , 4, 8
#pragma pack(1)
    struct demo
    {
        int i;
        char a;
        float f;
    };
    printf("%d \n", sizeof(struct demo));
    // struct demo dobj1;
    // struct demo dobj1;
    return 0;
}
