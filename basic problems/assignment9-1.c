// writew a program which accept number from user and display its digits in reverse order 
// input : 6785 
// output : 5  8  7  6 

# include <stdio.h>

void Display( int iNo )
{
    int iReverse = 0 ;
   int iDigit = 0 ;

    while(iNo != 0 )
    {
        iDigit = iNo % 10 ; 
         printf(" %d\n ",iDigit);
        iNo = iNo / 10 ;
    }
    
}
int main ()
{
 int iValue = 0 ; 

 printf(" Enter the digits \n ");
 scanf("%d",&iValue);

 Display(iValue);


    return 0 ;
}