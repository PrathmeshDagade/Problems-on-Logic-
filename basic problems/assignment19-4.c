// weite a programm which accepts numbers from user and return the frequency  of number 11 ;

// input : 6 
// elements :  66 78 34 45 78 11 

// output : the frequency of number 11 is : 1 


# include<stdio.h>
# include<stdlib.h>

int iFrequency ( int *Arr , int iSize )
{
int iCnt = 0 , iCount = 0 , iRet = 0 ;

    for ( iCnt = 0 ; iCnt < iSize ; iCnt++  )
    {
        if ( Arr[iCnt] == 11 )
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
    
    printf(" Enter the number of element : ");
    scanf("%d",&iLength);

    ptr =(int * )malloc(iLength * sizeof(int));

    for ( iCnt = 0 ; iCnt < iLength ; iCnt++ )
    {
        printf(" Enter the element : %d ",iCnt);
        scanf("%d",&ptr[iCnt]); 
    }

    iRet = iFrequency( ptr ,iLength ) ;

    printf(" the frequency of number 11 is : %d ",iRet );

    free (ptr) ;

    return 0 ;
}