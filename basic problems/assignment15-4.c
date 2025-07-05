// Accept number of rows and number of columns from user and display below pattern 

// input : iRow = 6 , iCol = 5

// output : 

/*
    columns
  *   *   *   *   *
  *   @   @   @   *
  *   @   @   @   * 
  *   @   @   @   *
  *   @   @   @   *
  *   *   *   *   *  


*/


 #include<stdio.h>

    void Pattern (int iRow ,int iCol )
    {
        int iCnt = 0 ;
        int i = 0 ;     // columns 
        int o = 0 ;    // rows

    

        for (o = 1 ; o <= iRow ;  o++ )
        {
            for (i = 1 ; i <= iCol ;  i++ )
            {
                
                if (( o == 1 ) || ( o == iRow ))
                {
                    printf("  * \t  ");
                }
                else if (( i == 1 ) || (  i == iCol )) 
                {
                     printf("  * \t  ");
                }

                else 
                {
                    printf("  @ \t  ");
                }
            
            }
            printf("\n");
        }


    }

 int main()
 {
    int iValue1 = 0 , iValue2 = 0 ;

    printf( " enter number of rows \n ");
    scanf(" %d",&iValue1);

    printf( " enter number of columns \n ");
    scanf(" %d",&iValue2);

    Pattern ( iValue1 , iValue2 );


    return 0 ;
 }