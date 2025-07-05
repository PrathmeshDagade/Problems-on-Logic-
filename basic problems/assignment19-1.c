//  write a program which accepts elements from user and print the frequency of even numbers ;

// input : 45 2 4 6 3 2 

// output : 4 

# include<stdio.h>
# include<stdlib.h>

int FrequencyEven( int Arr[] , int iSize )
{
    int iCnt = 0 ;
    int iRet = 0 ;
    int iCount = 0 ;

    for ( iCnt = 0 ; iCnt < iSize ; iCnt++ )
    {
        if ( (Arr[iCnt] % 2) == 0 )
        {
            iCount++ ; 
        }
    }

    return iCount ;
} 

int main ()
{
  int iLength = 0 , iCnt = 0 , iRet = 0 ;
  int *ptr = NULL ; 

    printf("Enter the number of elements ");
    scanf("%d",&iLength);

    ptr = ( int * )malloc (iLength * sizeof(int));

    for ( iCnt = 0 ; iCnt < iLength ; iCnt ++ )
    {
        printf(" Enter the elements %d  : ",iCnt);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = FrequencyEven(ptr , iLength);

    printf(" the frequency of even number is %d",iRet);

    free (ptr); 

    return 0 ;
}