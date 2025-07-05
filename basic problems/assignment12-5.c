// Accept number of rows and numbers of coulmns from user and display below pattern 

// input : iRow = 3    iCol = 5

/*
output : 
1 1 1 1 1 
2 2 2 2 2 
3 3 3 3 3 

*/ 

# include<stdio.h>

void Pattern ( int iRow , int iCol )
{
    int iSum = 1 ; 
    int i = 0 ; 
    int o = 0 ; 

  

    for ( o = 1 ; o <= iRow ; o++ )                  // rows 
    {
        for ( i = iCol  ; i >= 1 ; i-- )              // columns 
        {
            printf(" %d ",iSum) ;
        }
        printf("\n");
        iSum++ ;
    }

}

int main ()
{
    int iValue1 = 0 , iValue2 = 0 ; 

    printf(" Enter number of rows \n ") ;
    scanf("%d",&iValue1);
 
    printf(" Enter number of columns \n ") ;
    scanf("%d",&iValue2);

    Pattern ( iValue1 , iValue2 ) ;


    return 0 ;
}