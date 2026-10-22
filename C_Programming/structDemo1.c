#include <stdio.h>
int main()
{
// #pragma pack(1)
    struct demo
    {
        char a;
        int i;
        float f;
        double d;
    };
    struct demo dobj1;
    struct demo dobj2;

    dobj1.a = 'A';
    dobj1.i = 11;
    dobj1.f = 123.44f;
    dobj1.d = 34.445;

    printf("%d \n", sizeof(dobj1));
    
    printf("%d \n", sizeof(dobj1.a));
    printf("%d \n", sizeof(dobj1.i));
    printf("%d \n", sizeof(dobj1.f));
    printf("%d \n", sizeof(dobj1.d));
    return 0;
}