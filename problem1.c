// problem 1

#include <stdio.h>
#include <math.h>
int main()
{
    double const pi = 3.1416 ;
    double theta1, theta2, theta3 ;

    double w ;
    printf("Enter wavelength: ");
    scanf("%lf",&w);

    double m;
    printf("Enter m: ");
    scanf("%lf",&m);

    double a1,a2,a3 ;

    // convert micrometer to nanometer
    a1 = a1 * 1000 ;
    a2 = a2 * 1000 ;
    a3 = a3 * 1000 ;

    if( w >= 380.00 && w <= 750.00 )
    {
        printf("Enter width of slit 1, a1 : ");
        scanf("%lf",&a1);

        double x = (m*w)/a1;
        theta1 = asin( x ) ;
        theta1 = theta1 * 180.0 / pi ;
        printf("Theta 1 = %.2lf degree\n",theta1);



        printf("Enter width of slit 2, a2 : ");
        scanf("%lf",&a2);

        double y = (m*w)/a2 ;
        theta2 = asin( y ) ;
        theta2 = theta2 * 180.0 / pi ;
        printf("Theta 2 = %.2lf degree\n",theta2);



        printf("Enter width of slit 3, a3 : ");
        scanf("%lf",&a3);

        double z = (m*w)/a3 ;
        theta3 = asin( z ) ;
        theta3 = theta3 * 180.0 / pi ;
        printf("Theta 3 = %.2lf degree\n",theta3);

        if( theta1 <= 90.00 && theta2 <= 90.00 && theta3 <= 90.00 )
        {
            if( theta1 > theta2 && theta1 > theta3 )
                printf("Slit 1 bends the light most.\n");


            if( theta2 > theta1 && theta2 > theta3 )
                printf("Slit 2 bends the light most.\n");


            if( theta3 > theta1 && theta3 > theta2 )
                printf("Slit 3 bends the light most.\n");

        }

    }
    else
        printf("Out of the range. please enter a valid number.\n");

    return 0;

}
