// write a program which accepts number from user and count frequency of 4 in it 

// input : 45254
// output : 2

// input : 565600
// output : 0  

# include <stdio.h>

int CountFrequency( int iNo )
{

   int iDigit = 0 ;
   int iCnt = 0 ;

    while(iNo != 0 )
    {
        iDigit = iNo % 10 ; 
        
         if ( iDigit == 4)
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

 iRet = CountFrequency(iValue);

 printf("%d",iRet);

}
    