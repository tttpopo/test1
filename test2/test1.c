#include <stdio.h>


int a=3,b=5;

int main()
{
    //1
    printf("a=%d,b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d,b=%d\n",a,b);

    //2
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a=%d,b=%d\n",a,b);

    return 0;
}
