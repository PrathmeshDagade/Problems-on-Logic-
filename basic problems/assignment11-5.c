// Accept number from user and display below pattern 

// input : 8  
// output : 2 4 6 8 10 12 14 16 

# include<stdio.h>

void Pattern ( int iNo )
{
    int iCnt = 0 ;
    int iMultiply = 0 ;
    
    for (iCnt = 1 ; iCnt <= iNo ; iCnt++ )
    {
        iMultiply = iCnt * 2 ; 
        printf(" %d",iMultiply);
    }        

}

int main ()
{
    int iValue = 0 ; 

    printf("Enter Number of Elements \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0 ;
}