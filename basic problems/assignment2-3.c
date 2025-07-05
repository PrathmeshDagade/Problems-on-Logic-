//////////////////////////////////////////////////////////////////////////////////////////////
// File name : assignment2-1.c 
// File Discription : Accept one no from user if number is less than 10 then print "Hello" otherwise print "Demo"
// Author : prathmesh Dagade 
// Date : 10.05.2025
//////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////
//  Function name :        void Display
//  Function Discription : function is desined to accept 1 integer and there is a if else case to print a string if accepted value is less than 10 print hello otherwise print demo 
//  Author :               prathmesh Dagade 
//  Date :                 10.05.2025
//////////////////////////////////////////////////////////////////////////////////////////////
# include <stdio.h>

void Display (int iNo)
{
   if ( iNo <= 10 )
   {
     printf("Hello");
   }
   else 
   {
    printf("Demo");
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