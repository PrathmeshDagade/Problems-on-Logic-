// input : iRow = 4    iCol = 4

/*
output : 
 1 2 3 4 
 2 3 4 5
 3 4 5 6
 4 5 6 7


*/ 

# include<stdio.h>

void Pattern ( int iRow , int iCol )
{
  
    int i = 0 ; 
    int o = 0 ; 
    int cal = 0 ;
  


    for ( o = 1 ; o <= iRow ; o++ )                  // rows 
    {
        
        for ( i = 1  ; i <= iCol  ; i++)              // columns 
        {
          cal = o + i - 1 ;
            printf("%d",cal);
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