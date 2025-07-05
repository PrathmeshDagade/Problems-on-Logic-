// write a program which accepts number and count the digit which is less than 6 

// input : 4525499
// output : 5

// input : 565600
// output : 4  

# include <stdio.h>

int DigitCount( int iNo )
{

   int iDigit = 0 ;
   int iCnt = 0 ;

    while(iNo != 0 )
    {
        iDigit = iNo % 10 ; 
        
         if ( iDigit < 6)
         {
          iCnt++ ;
         }
        iNo = iNo / 10 ;
    }
    
    return iCnt ;
}
int main ()
{
 int iValue = 0 ; 
 int iRet = 0 ;

 printf(" Enter the digits \n ");
 scanf("%d",&iValue);

 iRet = DigitCount(iValue);

 printf("%d",iRet);

}
    