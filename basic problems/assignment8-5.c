// write a program which accepts area in square feet and convert it into square meter ( 1 square feet is = 0.0929 square meter  )


# include<stdio.h>
# define SquareMeter 0.0929

double SquareMeterCalculator( int iSquareFeet )
{
   double SquareMeterCal = 0.0 ;
    
   SquareMeterCal = iSquareFeet * SquareMeter ;

    return SquareMeterCal ;
}

int main ()
{
 int iSquareFeet = 0 ; 

 double dRet = 0.0 ;

    printf(" enter the Square feet to convert it into square meter : \n");
    scanf("%d",&iSquareFeet);

    dRet = SquareMeterCalculator(iSquareFeet);

    printf("the square meter is : %f ",dRet);
    
    return 0 ;
}