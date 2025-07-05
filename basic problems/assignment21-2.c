// write a programm which accepts numbers from user and retrurn the smallest number ;

// input : 6 

// elements :  85 66 3 66 93 88 

// output : the largest numbers is : 3


# include<stdio.h>
# include<stdlib.h>

int Diffrence( int Arr[] , int iSize )
{
int iCnt = 0 , iCount1 = Arr[0] , iCount2 = Arr[0] , iRet = 0 ;

    for ( iCnt = 0 ; iCnt < iSize ; iCnt++  )
    {
        if (Arr[iCnt] < iCount1 )
        {
          iCount1 = Arr[iCnt] ;
        }
        else if (Arr[iCnt] > iCount2 )
        {
             iCount2 = Arr[iCnt] ;
        }

        iRet = iCount2 - iCount1 ;
    }

    return iRet ; 
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

    iRet = Diffrence ( ptr ,iLength ) ;

    printf(" the  diffrence of smallest and largest number is %d ",iRet ) ;
    free (ptr) ;

    return 0 ;
}