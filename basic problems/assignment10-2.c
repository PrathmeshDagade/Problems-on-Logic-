// write a program which accepts number and count the odd numbers it contains 

// input : 22212
// output : 1

# include <stdio.h>

int CheckOdd( int iNo )
{

   int iDigit = 0 ;
   int iCnt = 0 ;

   while ( iNo != 0 )
   {
    iDigit = iNo % 10 ;
    if ( iDigit % 2 != 0 )
    {
        iCnt++ ;
    }
     iNo =  iNo / 10 ;
   }
    
    return iCnt ;
}
int main ()
{
 int iValue = 0 ; 
 int iRet = 0 ;

 printf(" Enter the digits \n ");
 scanf("%d",&iValue);

 iRet = CheckOdd(iValue);

 printf("%d",iRet);

}
    