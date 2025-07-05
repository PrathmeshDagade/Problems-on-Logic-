// weite a programm which accepts numbers from user and range , display the elements from that range ;  

// input : 6 
// start : 60  
// end   : 90 
// elements :  66 78 34 45 78 11 

// output : the number in between the range is : 66 78 78 


# include<stdio.h>
# include<stdlib.h>

void Range ( int *Arr , int iSize , int Starting , int ending  )
{
 int iCnt = 0 ;
 
    for ( iCnt = 0 ; iCnt < iSize ; iCnt++ )
    {
       if ((((Arr[iCnt]) >= Starting ) && ((Arr[iCnt]) <= ending ))) 
       {
          printf(" %d \n",Arr[iCnt]);
       }
    }
    
}

int main ()
{
    int iLength = 0 , iCnt = 0 , iRet = 0  ; 
    int *ptr = NULL ; 
    int iStartRange = 0 ; 
    int iEndRange = 0 ; 

    
    printf(" Enter the number of element : ");
    scanf("%d",&iLength);

    printf("Enter starting range  : ");
    scanf("%d",&iStartRange);

    printf("Enter eding range  : ");
    scanf("%d",&iEndRange);

    ptr =(int * )malloc(iLength * sizeof(int));

    for ( iCnt = 0 ; iCnt < iLength ; iCnt++ )
    {
        printf(" Enter the element : %d : ",iCnt);
        scanf("%d",&ptr[iCnt]); 
    }

    Range ( ptr ,iLength , iStartRange , iEndRange ) ;

    
    free (ptr) ;

    return 0 ;
}