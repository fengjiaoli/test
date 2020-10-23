#include<stdio.h>

int fun( int a )
{
    int b = 0;
    static int c = 3;
    printf("b=%d\n",b);
    a = (c++,b++,999);
    printf("b=%d\n",b);
    return (a);
}
main( )
{
    int a = 2,i,k;
    for(i = 0;i<2;i++)
        k = fun(a++);
    printf("%d\n",k);
}