#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf(" Enter the temperature in your city is\n");
    scanf("%d",&a);
    printf("The temperature in your city is %d`c\n",a);
    float b = a-32;
    float c = 9/5*b;
    printf("Your location's temperature in cetigrade is %f",c);
   
   
   
   
    return 0;
}