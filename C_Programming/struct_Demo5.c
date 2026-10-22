#include <stdio.h>
#pragma pack(1)
struct demo
{
    int i = 11;       // error
    float f = 90.99f; // error
    char ch = 'A';    // error
};
int main()
{

    struct demo dobj1;
    struct demo dobj2;

    struct demo *dp = NULL;
    dp = &dobj2;

    // Direct accessing operator
    dobj1.i = 11;
    dobj1.ch = 'A';
    dobj1.f = 90.99f;

    // Indirect accessing operator
    dp->i = 21;
    dp->ch = 'B';
    dp->f = 91.99f;

    printf("%d \n", dobj1.i);
    printf("%d \n", dp->i);

    return 0;
}
