// weite a programm which accepts numbers from user and retrurn the product of all odd numbers  ;

// input : 6 

// elements :  15 66 3 70 10 88 

// output : the product of all odd numbers is : 45


# include<stdio.h>
# include<stdlib.h>

int iProduct ( int Arr[] , int iSize )
{
int iCnt = 0 , iCount = 1 , iRet = 0 ;

    for ( iCnt = 0 ; iCnt < iSize ; iCnt++  )
    {
        if ((Arr[iCnt] % 2) != 0 )
        {
          iCount = iCount * Arr[iCnt] ;
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

    iRet = iProduct ( ptr ,iLength  ) ;

    printf(" the product of odd number is %d ",iRet ) ;
    free (ptr) ;

    return 0 ;
}