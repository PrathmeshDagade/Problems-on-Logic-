//////////////////////////////////////////////////////////////////////////////////////////////
// File name : assignment4-1.c 
// File Discription : program which accepts 1 number from user and display its nonfactors 
// Author : prathmesh Dagade 
// Date : 17.05.2025
//////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////
//  Function name :        void NonFact 
//  Function Discription : function is used to display all non factor of that number 
//  Author :               prathmesh Dagade 
//  Date :                 10.05.2025
//////////////////////////////////////////////////////////////////////////////////////////////

# include <stdio.h>

void NonFact (int iNo)
{
    
    int iCnt = 0 ;
                    
    for( iCnt = 1 ; iCnt <= iNo ; iCnt++ )
    {
        if (( iNo % iCnt ) != 0)
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

    NonFact(iValue);

    

    return 0 ;
}