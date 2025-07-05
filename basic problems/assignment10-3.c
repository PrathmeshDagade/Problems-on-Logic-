// write a program which accepts number and count of digits in between 3 and 7 

// input : 22216
// output : 1

# include <stdio.h>

int Check( int iNo )
{

   int iDigit = 0 ;
   int iCnt = 0 ;

   while ( iNo != 0 )
   {
    iDigit = iNo % 10 ;
    if (( iDigit < 9 )&&(iDigit > 3 ))
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

 iRet = Check(iValue);

 printf("%d",iRet);

}
