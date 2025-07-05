// weite a programm which accepts numbers from user and accept one another number as no return the frequency  of number no from it  ;

// input : 6 
// No : 78
// elements :  66 78 34 45 78 11 

// output : the frequency of number no is : 2 


# include<stdio.h>
# include<stdlib.h>

int iFrequency ( int *Arr , int iSize , int iNO )
{
int iCnt = 0 , iCount = 0 , iRet = 0 ;

    for ( iCnt = 0 ; iCnt < iSize ; iCnt++  )
    {
        if ( Arr[iCnt] == iNO )
        {
            iCount++ ; 
        }
    }
    return iCount ; 
}

int main ()
{
    int iLength = 0 , iCnt = 0 , iRet = 0 , iNo = 0 ; 
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

    iRet = iFrequency( ptr ,iLength ,iNo ) ;

    printf(" the frequency of number %d  is : %d ",iNo,iRet ) ;
    free (ptr) ;

    return 0 ;
}