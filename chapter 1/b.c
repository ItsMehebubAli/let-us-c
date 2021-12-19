#include<stdio.h>
int main(int argc, char const *argv[])
{
    float a;
    printf("Enter the distance between your house and destination(in KM)\n");
    scanf("%f",&a);
    printf("Distance in metresis %0.3f\n",a*1000);
    printf("Distance in ccentimetres is %0.3f\n",a*100000);
    printf("Distance in feet is %0.3f\n",a*1000*3.28084);
    printf("Distance in inches is %0.3f\n",a*1000*39.37);
    return 0;
}
