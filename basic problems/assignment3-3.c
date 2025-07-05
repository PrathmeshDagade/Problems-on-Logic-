//////////////////////////////////////////////////////////////////////////////////////////////
// File name : assignment3-3.c 
// File Discription : a program which accepts one number from user and print that number of even factor numbers on screen 
// Author : prathmesh Dagade 
// Date : 10.05.2025
//////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////
//  Function name :        void Display
//  Function Discription : Accept 1 integer and prints even factor numbers of that input 
//  Author :               prathmesh Dagade 
//  Date :                 10.05.2025
//////////////////////////////////////////////////////////////////////////////////////////////
# include <stdio.h>

void Display (int iNo ) 
{
   int iCnt1 = 0 ;
   
   int Ans = 0 ;

        for( iCnt1 = 1 ; iCnt1 <= iNo ; iCnt1++ )
        {
            if ((iCnt1 % 2 == 0  &&  iNo % iCnt1 == 0))
            {
            printf("%d \n ",iCnt1);
            }
        }
}

int main ()
{
    int iValue = 0 ; 
    
    printf("Enter number : ");
    scanf("%d",&iValue);

    

    Display (iValue ) ;

    return 0 ;
}