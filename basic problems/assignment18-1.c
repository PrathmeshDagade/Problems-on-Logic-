// Accept n number from user and return diffrence between Summation of even elements and summation of odd numbers 

// input : N : 6 
// elements : 85  66  3   80   93  88

// output : 53  ( 234 - 181 )

# include <stdio.h> 
# include <stdlib.h>

int Diffrence (int Arr[] , int iNo )
{
    int iCnt = 0 ;
    int iSum1 = 0 , iSum2 = 0 ; 
    int iRet = 0 ;
    
    for ( iCnt = 0 ; iCnt < iNo ; iCnt++ )
    {
        if (( Arr[iCnt] % 2) == 0 )
        {
            iSum1 = iSum1 + Arr[iCnt] ;
        }
        else 
        {
            iSum2 = iSum2 + Arr[iCnt] ; 
        }
    }

    iRet = iSum1 - iSum2 ;

    return iRet ;
}

int main ()
{

    int iRet = 0 , iSize = 0 ,  iCnt = 0 ;
    int *ptr = NULL ;
    int iLength = 0 ;

    printf(" number of elements \n ");
    scanf("%d",&iSize);

    ptr = ( int * ) malloc ( iSize * sizeof (int));

    if ( ptr == NULL )
    {
        printf(" unable to allocate memory  \n ");
        return -1 ;
    }

    for (iCnt = 0  ; iCnt < iSize ; iCnt ++ )
    {
        printf( "enter the element %d : ",iCnt );
        scanf("%d",&ptr[iCnt]);
    }

      iRet = Diffrence( ptr , iSize );

      printf(" the summation of even and odd is : %d ",iRet);

     free (ptr);
    return 0 ;
}