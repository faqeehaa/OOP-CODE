#include<stdio.h>
 int main()
{int a=3,b=8;
    int temp;
    temp = a;
    a = b;
    b = temp ;
    printf("value before swap %d/n:",a);
    printf("value after swap %d/n:",b);
    return 0;
}