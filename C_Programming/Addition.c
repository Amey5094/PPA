#include <stdio.h>

int main()
{

    int No1 = 0, No2 = 0, Ans = 0;
    printf("Enter First No: \n");
    scanf("%d", &No1);
    printf("Enter Second No: \n");
    scanf("%d", &No2);
    Ans = No1 + No2; //// Business Logic
    printf("Addition is  %d \n", Ans);
    return 0;
}