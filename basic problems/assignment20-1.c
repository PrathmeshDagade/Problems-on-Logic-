// weite a programm which accepts numbers from user and accept one another number as no and checkwether no is present in it or not   ;

// input : 6 
// No : 78
// elements :  66 78 34 45 78 11 

// output : the frequency of number no is : true 


# include<stdio.h>
# include<stdlib.h>
#include<stdbool.h>


bool iCheckNo ( int *Arr , int iSize , int iNO )
{
int iCnt = 0 , iCount = 0 , bRet = false ;

    for ( iCnt = 0 ; iCnt < iSize ; iCnt++ )
    {
        if ( Arr[iCnt] == iNO )
        {
            bRet = true ; 
            break;
        }
    }
    return bRet ; 
}

int main ()
{
    int iLength = 0 , iCnt = 0 , bRet = 0 , iNo = 0 ; 
    int *ptr = NULL ; 
    
    printf(" Enter the number of element : ");
    scanf("%d",&iLength);

    printf("Enter number NO : ");
    scanf("%d",&iNo);


    ptr =(int * )malloc(iLength * sizeof(int));

    for ( iCnt = 0 ; iCnt < iLength ; iCnt++ )
    {
        printf(" Enter the element : %d : ",iCnt);
        scanf("%d",&ptr[iCnt]); 
    }

    bRet = iCheckNo ( ptr ,iLength ,iNo ) ;

    if ( bRet == true )
    {
        printf(" the number %d  is : present ",iNo );
    }
    else 
    {
        printf(" the  number %d  is : not present ",iNo );
    }

    

    free (ptr) ;

    return 0 ;
}