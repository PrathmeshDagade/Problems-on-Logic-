// Accept the inputs from user and print the below pattern 

// input : iRows = 4 ,iCol = 4 

// output :

/*
    
  *    
  *   *   
  *   *   *   
  *   *   *   *

*/

# include<stdio.h>

void Pattern ( int iRow , int iCol )
{
  int  i = 0 ;  //column
  int  o = 0 ;  // Row 
  

  for (o = 1 ; o <= iRow ; o++ )
  {
    for( i = 1 ; i <= iCol ; i++ )
    {
         if ( o >= i )
         {
            printf(" * \t");
         }
         else 
         {
            printf("  ");
         }
         

    }
    printf("  \n ");
    
  }

}
int main ()
{
    int iValue1 = 0 , iValue2 = 0 ;

    printf(" enter the number of rows \n");
    scanf("%d",&iValue1);

    printf(" enter the number of cloumns \n ");
    scanf(" %d",&iValue2);

    Pattern ( iValue1 , iValue2 ) ;

    return 0 ;
}