// input : iRow = 4    iCol = 5

/*
output : 
4 4 4 4 4 
3 3 3 3 3 
2 2 2 2 2 
1 1 1 1 1



*/ 

# include<stdio.h>

void Pattern ( int iRow , int iCol )
{
  
    int i = 0 ; 
    int o = 0 ; 
    int j = iCol ;
 

    for ( o = 1 ; o <= iRow ; o++ )                  // rows 
    {
        
        for ( i = 1  ; i <= iCol  ; i++)              // columns 
        {
           printf(" %d ",j) ;
         
        }
        printf("\n");
          j-- ; 
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