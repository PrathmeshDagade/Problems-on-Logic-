// write a programm which accept radius of circle from user and calculate its area consider value of pi = 3.14 ( Area = pi * radius * radius)



# include <stdio.h>
# define PI 3.14

double AreaOfCircle ( float dRadius )
{
  double Area = 0.0 ; 

    if (dRadius < 0 )
    {
        printf(" enter the vaid positive Radius number\n "); 
        return -1 ;
    }

    Area = PI * dRadius * dRadius ; 

    return Area ;
}

int main ()
{
    float fRadius  = 0.0f ;

    double iRet = 0.0 ; 


    printf(" Enter the radius \n");

    scanf("%f",&fRadius);

   iRet = AreaOfCircle(fRadius);

    printf(" The Area of a circle is : %f \n ",iRet);


    return 0 ;
}