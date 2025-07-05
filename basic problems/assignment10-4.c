// write a program which accepts numbers and print multiplication of digits .

// input : 22216
// output : 1

# include <stdio.h>

int Multiplication( int iNo )
{

   int iDigit = 0 ;
   int iCnt = 1 ;

   while ( iNo != 0 )
   {
    iDigit = iNo % 10 ;
    
    iCnt = iCnt * iDigit  ;

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

 iRet = Multriplication(iValue);

 printf("%d",iRet);

}
