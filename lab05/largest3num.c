#include <stdio.h>
int main()
{
    int a=40,b=20,c=60;
    if (a>=b&&b>=c)
    {
        printf("%d",a);
    }
    else if (b>=a&&b>=c)
    {
        printf("%d",b);
    }
    else
    {
        printf("%d\n", c);
        printf("My name is Shambhavi Chouhan and I am solving question 19");
    }
    return 0;
}
