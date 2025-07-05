//////////////////////////////////////////////////////////////////////////////////////////////
// File name : assignment1-1.c 
// File Discription : Program to divide two numbers 
// Author : prathmesh Dagade 
// Date : 10.05.2025
//////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////
//  Function name :        Divide 
//  Function Discription : it is designed to Accept two parameters and there is one check case if 2nd parameter is equal to  0 or not if yes return -1 and if not division of 2 parameters
//  Input  :               Integer
//  Output :               Integer
//  Author :               prathmesh Dagade 
//  Date   :               10.05.2025
//////////////////////////////////////////////////////////////////////////////////////////////
# include <stdio.h>

int Divide ( int iNo1 , int iNo2 )
{
    int iAns = 0 ;

    if(iNo2 == 0 )
    {
        return -1 ;
    }
    iAns = iNo1 / iNo2 ;
    return iAns ;

}
int main ()
{
    int iValue1 = 15 , iValue2 = 5 ;
    int iRet = 0 ; 
    
    iRet = Divide( iValue1 , iValue2 );

    printf(" Division is %d ",iRet );

    return 0 ;
}