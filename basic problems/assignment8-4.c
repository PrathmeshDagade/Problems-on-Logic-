// write a program which accepts temperature in fahrenheit and convert it into celcius ( celcius = (Fahrenheit - 32 )* (5/9))


# include <stdio.h>
# define converter 5/9

double CelciusConverter(float fTempInFah )
{
    double Celcius = 0.0 ;

     Celcius = ((fTempInFah - 32) * converter ) ;

    return Celcius ;
}

int main ()
{
    float fahrenheit = 0.0f ;

    double dRet = 0.0 ; 

    printf("Enter the temperature in fahrenheit to convert in celcius :  ");
    scanf("%f",&fahrenheit);

    dRet = CelciusConverter(fahrenheit);

    printf("the temperature is in : %f celcius \n",dRet);

    return 0 ;
}