// write a programm which accepts numbers from user and display summation of all digits ;

// input : 6 

// elements :  853 66 3 66 933 88 

// output : 16 3 12 15 16 


# include<stdio.h>
# include<stdlib.h>

void  Display( int Arr[] , int iSize )
{
int iCnt = 0 , iCount = 0 , iRet = 0 , iDigit = 0 ;

    for ( iCnt = 0 ; iCnt < iSize ; iCnt++  )
    {
        while (Arr[iCnt] != 0 )
        {
           iDigit = Arr[iCnt] % 10 ; 
           Arr[iCnt] = Arr[iCnt] / 10 ; 
           iCount = iCount + iDigit ;
        }

       printf("%d\t",iCount) ;
    
        iCount = 0 ;
    }

}

int main ()
{
    int iLength = 0 , iCnt = 0 ; 
    int *ptr = NULL ; 
    
    printf(" Enter the number of element : ");
    scanf("%d",&iLength);


    ptr =(int * )malloc(iLength * sizeof(int));

    for ( iCnt = 0 ; iCnt < iLength ; iCnt++ )
    {
        printf(" Enter the element : %d : ",iCnt);
        scanf("%d",&ptr[iCnt]); 
    }

    Display ( ptr ,iLength ) ;

   
    free (ptr) ;

    return 0 ;
}