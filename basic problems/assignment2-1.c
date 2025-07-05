//////////////////////////////////////////////////////////////////////////////////////////////
// File name : assignment2-1.c 
// File Discription : Accept one no from user and print that number of * on screen 
// Author : prathmesh Dagade 
// Date : 10.05.2025
//////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////
//  Function name :        void Display
//  Function Discription : function is desined to print * times as user input in forward sequence 
//  Author :               prathmesh Dagade 
//  Date :                 10.05.2025
//////////////////////////////////////////////////////////////////////////////////////////////
# include <stdio.h>

void Display (int iNo)
{
    int  iCnt = 0 ;
    iCnt = 1 ;
    while (  iCnt <= iNo  )
    {
        printf(" %d : * \n ",iCnt);
        iCnt++ ;
    }
}

int main ()
{
    int iValue = 0 ; 
   
    printf("Enter number : ");
    scanf("%d",&iValue);
    Display (iValue) ;

    return 0 ;
}