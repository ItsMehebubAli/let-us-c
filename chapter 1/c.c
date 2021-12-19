#include<stdio.h>
int main(int argc, char const *argv[])
{
    float a,b,c,d,e;
    printf("Enter the marks obtain in English is\t");
    scanf("%f",&a);
    printf("Enter the marks obtain in Physics is\t");
    scanf("%f",&b);
    printf("Enter the marks obtain in Chemistry is\t");
    scanf("%f",&c);
    printf("Enter the marks obtain in Mathmatics is\t");
    scanf("%f",&d);
    printf("Enter the marks obtain in Physical Education is\t");
    scanf("%f",&e);
    float f=a+b+c+d+e;
    printf("Your total botained marsk is %f\n",f);
    printf("Your marks percentage is %f",f/500*100);



    return 0;
}
