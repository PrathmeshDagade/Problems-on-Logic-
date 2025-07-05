//////////////////////////////////////////////////////////////////////////////////////////////
// File name : assignment4-1.c 
// File Discription : Program which accepts a number from user and display its multiplication of factors 
// Author : prathmesh Dagade 
// Date : 17.05.2025
//////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////
//  Function name :        int MultiFact 
//  Function Discription : function is used to perform multiplication of factors which is accepted from user 
//  Author :               prathmesh Dagade 
//  Date :                 10.05.2025
//////////////////////////////////////////////////////////////////////////////////////////////

# include <stdio.h>

int MultiFact (int iNo)
{
    int iCnt = 0 ;
    int iMulti = 1 ; 
    

    for(iCnt = 1 ; iCnt <= iNo/2 ; iCnt++ )
    {
        if ((  iNo % iCnt  ) == 0)
        {
          iMulti =  iCnt * iMulti ;
        }
    }
    
     
    return iMulti  ;
}

int main ()
{
    int iValue = 0 ;
    int iRet = 0 ;

    printf("Enter Number ");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);

    printf("the Multiplication of Entered number is :%d ",iRet);

    return 0 ;
}