//////////////////////////////////////////////////////////////////////////////////////////////
// File name : assignment4-1.c 
// File Discription : program which accepts 1 number from user and display summation of  its nonfactors 
// Author : prathmesh Dagade 
// Date : 17.05.2025
//////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////
//  Function name :        void SumNonFact 
//  Function Discription : function is used to perform summation of all nonfactors 
//  Author :               prathmesh Dagade 
//  Date :                 10.05.2025
//////////////////////////////////////////////////////////////////////////////////////////////

# include <stdio.h>

int SumNonFact(int iNo)
{
    
    int iCnt = 0 ;
    int iSum = 0 ;
                    
    for( iCnt = 1 ; iCnt <= iNo ; iCnt++ )
    {
        if (( iNo % iCnt ) != 0)
        {
           iSum = iSum + iCnt ;
        }
    }
    return iSum ;
}
int main ()
{
    int iValue = 0 ;
    int iRet = 0 ;

    printf("Enter Number ");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d",iRet);

    return 0 ;
}