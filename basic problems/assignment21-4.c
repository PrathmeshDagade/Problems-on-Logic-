// write a programm which accepts numbers from user and display all such number which contains 3 digits in it ;

// input : 6 

// elements :  853 66 3 66 933 88 

// output : the largest numbers is : 853 933


# include<stdio.h>
# include<stdlib.h>

void  Display( int Arr[] , int iSize )
{
int iCnt = 0 , iCount = Arr[0] , iRet = 0 ;

    for ( iCnt = 0 ; iCnt < iSize ; iCnt++  )
    {
        if (((Arr[iCnt]) > 99 ) && ((Arr[iCnt]) < 1000 ))
        {
          printf("%d\t",Arr[iCnt]) ;
        }
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