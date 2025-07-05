//////////////////////////////////////////////////////////////////////////////////////////////
// File name : assignment4-1.c 
// File Discription : program which accepts 1 number from user and display its factors in decreasing order  
// Author : prathmesh Dagade 
// Date : 17.05.2025
//////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////
//  Function name :        void FactRev 
//  Function Discription : function is used to display Reverse factors in decreasing order 
//  Author :               prathmesh Dagade 
//  Date :                 10.05.2025
//////////////////////////////////////////////////////////////////////////////////////////////

# include <stdio.h>

void FactRev (int iNo)
{
    
    int iCnt = 0 ;
                    
    for( iCnt = (iNo/2) ; iCnt >= 1 ; iCnt-- )
    {
        if (( iNo % iCnt ) == 0)
        {
          printf("%d\n",iCnt);
        }
    }
}
int main ()
{
    int iValue = 0 ;
    

    printf("Enter Number ");
    scanf("%d",&iValue);

    FactRev(iValue);

    

    return 0 ;
}