//  write a program which accepts elements from user and print the diffrence of even numbers and odd numbers ;

// input : 7 
//  elements :  85  66 3  80 93 88  90 
// output : 1 

# include<stdio.h>
# include<stdlib.h>

int Diffrence( int Arr[] , int iSize )
{
    int iCnt = 0 ;
    int iRet = 0 ;
    int iCount1 = 0 ;
    int iCount2 = 0 ;

    for ( iCnt = 0 ; iCnt < iSize ; iCnt++ )
    {
        if ( (Arr[iCnt] % 2) == 0 )
        {
            iCount1++ ; 
        }
        else 
        {
            iCount2++ ;
        }
    }

    return iCount1 - iCount2 ;
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

    iRet = Diffrence(ptr , iLength);

    printf(" the diffrence of even numbers and odd numbers is %d",iRet);

    free (ptr); 

    return 0 ;
}