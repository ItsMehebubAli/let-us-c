#include<stdio.h>
int main(int argc, char const *argv[])
{
    float a,b;
    Pritnf("Selling price of the products\n");
    sacnf("%f",&a);
    printf("Cost price of the products\n");
    scanf("%f",&b);
    if (a>b)
    {
        printf("You have made a profit of %f",a+b);
    }
    else if (a<b)
    {
        printf("You have made  a loss of %f",b-a);
    }
    else if (a=b)
    {
        printf("No revenue generated");
    }
    return 0;
}
