//////////////////////////////////////////////////////////////////////////////////////////////
// File name : assignment2-1.c 
// File Discription : Accept two no from user and display first number in second number of times
// Author : prathmesh Dagade 
// Date : 10.05.2025
//////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////
//  Function name :        void Display
//  Function Discription : function is desined to accept 2 integers and to print no of 1st parameter in frequency of times 
//  Author :               prathmesh Dagade 
//  Date :                 10.05.2025
//////////////////////////////////////////////////////////////////////////////////////////////
# include <stdio.h>

void Display (int iNo , int iFrequency ) 
{
   int iCnt1 = 0 ;
  
   for( iCnt1 = 1 ; iCnt1 <= iFrequency ; iCnt1++ )
   {
    printf("%d \t",iNo);
   }
}

int main ()
{
    int iValue = 0 ; 
    int iCount = 0 ;
    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("Enter frequency  : ");
    scanf("%d",&iCount);

    Display (iValue , iCount) ;

    return 0 ;
}