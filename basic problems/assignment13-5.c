// input : iRow = 3    iCol = 4

/*
output : 
 1 2 3 4
 5 6 7 8
9 10 11 12


*/ 

# include<stdio.h>

void Pattern ( int iRow , int iCol )
{
  
    int i = 0 ; 
    int o = 0 ; 
   int j = 1  ; 
  


    for ( o = 1 ; o <= iRow ; o++ )                  // rows 
    {
        
        for ( i = 1  ; i <= iCol  ; i++)              // columns 
        {
    
           printf(" %d ",j) ;
            j++;
        }
        printf("\n");
       
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