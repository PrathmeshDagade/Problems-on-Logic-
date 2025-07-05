// input : 5 
// output :  120 

// factorial 

# include <stdio.h>
int Factorial (int iNo)
{
    int iCnt = 0 ;
    int Factorial = 1 ; 

    for (iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        Factorial = Factorial * iCnt   ;
    }
    return Factorial ;
}
int main ()
{
    int iRet = 0 ;
    int iValue = 0 ;


    printf("Enter the value \n");
    scanf("%d",&iValue);
 
    iRet = Factorial(iValue);
 
    printf(" %d ", iRet);
    return 0 ;
}