// problem 2

#include <stdio.h>
#include <math.h>
int main()
{
    // for green light

    double m1=3.0, w1=530.0, theta1=65.0;
    double pi=3.1416;
    double radian = theta1*(pi/180.0);

    double sine_value= sin(radian);

    double d = (m1*w1)/sine_value;

    // for red light

    double m2=2.0, w2=700.0;

    double theta_r= asin(m2*w2/d);

    theta_r =(theta_r*180.0)/pi;

    printf("At angle of %.2lf degree from the central maxima , the second-order bright spot will be seen for red light.\n",theta_r);

    return 0 ;
}

// ID - 215 , 229, 231, 233 
