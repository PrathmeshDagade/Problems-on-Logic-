
// Accept number of rows and numbers of coulmns from user and display below pattern 

// input : iRow = 4    iCol = 4

/*
output : 
A A A A 
B B B B 
C C C C
D D D D


*/ 

# include<stdio.h>

void Pattern ( int iRow , int iCol )
{
    char ch   = 'A' ; 
    int i = 0 ; 
    int o = 0 ; 

 

    for ( o = 1 ; o <= iRow ; o++ )                  // rows 
    {
        
        for ( i = iCol  ; i >= 1 ; i--)              // columns 
        {
           printf(" %c ",ch) ;
         
         
       
        }
        printf("\n");
          ch++ ;
      
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