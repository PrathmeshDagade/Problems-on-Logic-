// Accept number from user and display below pattern 

// input : 5 
// output : A B C D E 

# include<stdio.h>

void Pattern ( int iNo )
{
    int iCnt = 0 ;
    char cAlphabets = 'A' ;
    
    for (iCnt = 1 ; iCnt <= iNo ; iCnt++ )
    {
        printf("%c\t",cAlphabets);
        cAlphabets ++ ;
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