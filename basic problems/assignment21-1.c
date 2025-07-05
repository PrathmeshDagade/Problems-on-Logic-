// write a programm which accepts numbers from user and retrurn the largest number   ;

// input : 6 

// elements :  15 66 3 70 10 88 

// output : the largest numbers is : 88


# include<stdio.h>
# include<stdlib.h>

int iLargest ( int Arr[] , int iSize )
{
int iCnt = 0 , iCount = Arr[0] , iRet = 0 ;

    for ( iCnt = 0 ; iCnt < iSize ; iCnt++  )
    {
        if (Arr[iCnt] > iCount )
        {
          iCount = Arr[iCnt] ;
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
        printf(" Enter the element : %d : ",iCnt);
        scanf("%d",&ptr[iCnt]); 
    }

    iRet = iLargest ( ptr ,iLength ) ;

    printf(" the largest number is %d ",iRet ) ;
    free (ptr) ;

    return 0 ;
}