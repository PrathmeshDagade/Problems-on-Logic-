// write a program which accepts number and count the even numbers it contains 

// input : 4525499
// output : 3

// input : 22212
// output : 4

# include <stdio.h>

int CheckEven( int iNo )
{

   int iDigit = 0 ;
   int iCnt = 0 ;

   while ( iNo != 0 )
   {
    iDigit = iNo % 10 ;
    if ( iDigit % 2 == 0 )
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

 iRet = CheckEven(iValue);

 printf("%d",iRet);

}
    