// the diffrence of Odd and Event Factorial 

# include <stdio.h>

int  DiffrenceOfFactorial ( int  iNo )
{
  int iCnt = 0 ;

  int EvenFactorial = 1 ;

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
        else if (( iCnt % 2 == 0 ) )
        {
            EvenFactorial = EvenFactorial * iCnt  ;
        }
  }
  
  
  return  EvenFactorial - OddFactorial ;
}

int main ()
{
    int iValue = 0 ;

    int iRet = 0 ; 


    printf(" Enter the number  \n");

    scanf("%d",&iValue);

   iRet = DiffrenceOfFactorial(iValue);

    printf(" The Diffrence of even and odd factorial are : %d \n ",iRet);


    return 0 ;
}