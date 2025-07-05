 // even factorial programm 

# include <stdio.h>

int  EvenFactorial ( int  iNo )
{
  int iCnt = 0 ;

  int EvenFactorial = 1 ;

  if ( iNo < 0 )
  {
    iNo = -iNo ; 
  }

  for (iCnt = 1 ; iCnt <= iNo ; iCnt++ )
  {
    if ( iCnt % 2 == 0 )
    {
        EvenFactorial = EvenFactorial * iCnt  ;
    }
  }
  
  return  EvenFactorial   ;
}

int main ()
{
    int iValue = 0 ;

    int iRet = 0 ; 


    printf(" Enter the number  \n");

    scanf("%d",&iValue);

   iRet = EvenFactorial(iValue);

    printf("%d The even factorial are \n ",iRet);


    return 0 ;
}