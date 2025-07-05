// Odd factorial programm 

# include <stdio.h>

int  OddFactorial ( int  iNo )
{
  int iCnt = 0 ;

  int OddFactorial = 1 ;

  if ( iNo < 0 )
  {
    iNo = -iNo ; 
  }

  for (iCnt = 1 ; iCnt <= iNo ; iCnt++ )
  {
    if ( iCnt % 2 != 0 )
    {
        OddFactorial = OddFactorial * iCnt  ;
    }
  }
  
  return  OddFactorial   ;
}

int main ()
{
    int iValue = 0 ;

    int iRet = 0 ; 


    printf(" Enter the number  \n");

    scanf("%d",&iValue);

   iRet = OddFactorial(iValue);

    printf("%d The odd factorials are \n ",iRet);


    return 0 ;
}