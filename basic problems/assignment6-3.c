// input : 5 
// output :  the table of 5  

// factorial 

# include <stdio.h>
void  Display  (int iNo)
{
    int iCnt = 0 ;
    int Factorial = 0 ; 

    for (iCnt = 1 ; iCnt <= 10 ; iCnt++)
    {
        Factorial = iCnt * iNo ;

       printf(" %d ", Factorial );
    }
}
int main ()
{
    int iRet = 0 ;
    int iValue = 0 ;


    printf("Enter the value \n");
    scanf("%d",&iValue);
 
    Display(iValue);
 
    
    return 0 ;
}