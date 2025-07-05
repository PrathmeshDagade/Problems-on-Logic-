// Accept n number from user and display the numbers which is divisible by  3 and 5 

// input : N : 6
// elements : 85  66  3   15  93  88  

// output :  80 

# include <stdio.h> 
# include <stdlib.h>

void  Display (int Arr[] , int iNo )
{
    int iCnt = 0 ;
    
  
    for ( iCnt = 0 ; iCnt < iNo ; iCnt++ )
    {
        if ((( Arr[iCnt] % 5 ) == 0 ) && (( Arr[iCnt] % 3 ) == 0 ))
        {
            printf("  %d \t ", Arr[iCnt]);
        }
    }  
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

  Display( ptr , iSize );

    free (ptr);
    return 0 ;
}