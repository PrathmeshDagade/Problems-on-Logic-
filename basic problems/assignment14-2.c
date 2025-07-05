// input : iRow = 5    iCol = 5

/*
output : 
 2 4 6 8 10 
 1 3 5 7 9 
 2 4 6 8 10 
 1 3 5 7 9 


*/ 

# include<stdio.h>

void Pattern ( int iRow , int iCol )
{
  
    int i = 0 ; 
    int o = 0 ; 
   int j = 0 ; 
  


    for ( o = 1 ; o <= iRow ; o++ )                  // rows 
    {
        
        for ( i = 1  ; i <= iCol  ; i++)              // columns 
        {
           if ( o % 2 != 0 )
           {
               j = i * 2 ;
               printf(" %d ",j) ;
           }
           if ( o % 2 == 0)
           {
                if (i % 2 != 0 )
                {
                    printf(" %d ",i) ;
                }
           }
            
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