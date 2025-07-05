//////////////////////////////////////////////////////////////////////////////////////////////
// File name : assignment1-4.c 
// File Discription : Accepts one number and check whether it is divisible by 5 or not
// Author : prathmesh Dagade 
// Date : 10.05.2025
//////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////
//  Function name :       Check
//  Function Discription : Function is designed to check whether accepted integer is divisible by 5 or not if yes returns true and if not  ,returns false 
//  Input  :               Integer
//  Output :               Boolean
//  Author :               prathmesh Dagade 
//  Date   :               10.05.2025
//////////////////////////////////////////////////////////////////////////////////////////////
# include <stdio.h>
typedef int BOOL ;
# define TRUE 1
# define FALSE -1
  
int Check ( int iNo  )
{
    if(( iNo % 5 ) == 0 )
    {
        return TRUE ;
    }
    else 
    {
        return FALSE ;
    }

}
int main ()
{
    int iValue = 0 ;
    BOOL bRet = FALSE ; 
    
    printf(" enter the value ");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if (bRet == TRUE )
    {
        printf("divisible by 5 ");
    }
    else 
    {
        printf(" NOT divisible by 5 ");
    }

    return 0 ;
}