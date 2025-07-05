//  write a program which accepts elements from user and check wether 11 number is present in it or not   ;

// input : 7 
//  elements :  85  66 3  80 93 88  90 
// output : 11 is absent 


# include<stdio.h>
# include<stdlib.h>
# include<stdbool.h>

int Diffrence( int Arr[] , int iSize )
{
    int iCnt = 0 ;
    int iRet = 0 ;
    bool bRet = false  ;
   

    for ( iCnt = 0 ; iCnt < iSize ; iCnt++ )
    {
        if ( Arr [iCnt] == 11 )
        {
            bRet = true ;
            break ;
        }
    }

    return bRet ;
} 

int main ()
{
  int iLength = 0 , iCnt = 0  ;
  int *ptr = NULL ; 
  bool bRet = false ; 


    printf("Enter the number of elements ");
    scanf("%d",&iLength);

    ptr = ( int * )malloc (iLength * sizeof(int));

    for ( iCnt = 0 ; iCnt < iLength ; iCnt ++ )
    {
        printf(" Enter the elements %d  : ",iCnt);
        scanf("%d",&ptr[iCnt]);
    }

    bRet = Diffrence(ptr , iLength);

   
    if ( bRet == true )
    {
        printf("the number 11 is present ");
    }
    else 
    {
        printf("the number 11 is absent ");
    }
    free (ptr); 

    return 0 ;
}