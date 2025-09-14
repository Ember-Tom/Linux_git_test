#include<stdio.h>

int main(void)
{
    int a=0,b=7,c=0;
    int *p = &a;
    *p=15;
    c = a + b;
    printf("a + b = %d + %d = %d\n", a, b, c);
    //printf("Hello World!");
    return 0;
}

