//////////////////////////////////////////////////////////////////////////////////////////////
// File name : assignment1-3.c 
// File Discription : Program to print 5 to 1 numbers on screen 
// Author : prathmesh Dagade 
// Date : 10.05.2025
//////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////
//  Function name :        void Accept
//  Function Discription : function is desined to print * 
//  Author :               prathmesh Dagade 
//  Date :                 10.05.2025
//////////////////////////////////////////////////////////////////////////////////////////////
# include <stdio.h>

void Accept ( int  iNO )
{
    
    int  iCnt = 0 ;
    for ( iCnt = 1 ; iCnt <= iNO ; iCnt++ )
    {
        printf("*");
    }
}

int main ()
{
    int iValue = 0 ; 
    iValue = 5 ;

    Accept ( iValue ) ;

    return 0 ;
}