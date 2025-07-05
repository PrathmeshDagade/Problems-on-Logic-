// write a programm which accept distance in kilometer and convert it into meter  (1km = 1000 meter) 


# include <stdio.h>
# define KM 1000

int KmToMeter( int iMeter )
{
  int MeterConverter = 0.0 ; 

  MeterConverter = iMeter * KM ;

    return MeterConverter ;
}

int main ()
{
    int iMeter = 0 ;

    int iRet = 0.0 ; 


    printf(" Enter the kilomter to conert into meter  \n");
    scanf("%d",&iMeter);
    
   

   iRet = KmToMeter(iMeter);

    printf(" the meter is  : %d \n ",iRet);


    return 0 ;
}