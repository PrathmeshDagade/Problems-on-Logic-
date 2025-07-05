// write a program which accepts number from user and check whether it contains 0 int it or not 

// input : 456545
// output : there is no zero 

// input : 565600
// output : it contains zero in it 

# include<stdbool.h>
# include <stdio.h>

bool ZeroCheck( int iNo )
{
    bool bCon = false ;
   int iDigit = 0 ;

    while(iNo != 0 )
    {
        iDigit = iNo % 10 ; 
         if ( iDigit == 0 )
         {
            bCon =  true ; 
            break ;
         }
        iNo = iNo / 10 ;
    }
    
    return bCon ;
}
int main ()
{
 int iValue = 0 ; 
 bool bRet = false ;

 printf(" Enter the digits \n ");
 scanf("%d",&iValue);

 bRet = ZeroCheck(iValue);

    if (bRet == true )
    {
        printf("there is zero present in numbers you entered \n");
    }
    else 
    {
        printf("there is no zero present in numbers you entered \n");
    }
    return 0 ;
}