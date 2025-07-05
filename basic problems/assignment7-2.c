// input : 1$ 
// output : 70 rupess 

# include <stdio.h>

int  DollarToIndian( int iIndian )
{
  int DollarValue = 70  ;
  
  int Converter = 0 ;

  if (iIndian  < 0)
  {
    iIndian = -iIndian ;
  }

  if (iIndian > 0 )
  {
    Converter = DollarValue * iIndian  ;
  }
  
  return  Converter ;
}

int main ()
{
    int iValue = 0 ;

    int iRet = 0 ; 


    printf(" Enter the dollar you want to convert \n");

    scanf("%d",&iValue);

   iRet = DollarToIndian(iValue);

    printf("%d\n ",iRet);


    return 0 ;
}