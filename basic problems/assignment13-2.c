// Accept number of rows and numbers of coulmns from user and display below pattern 

// input : iRow = 5    iCol = 4

/*
output : 
A B C D 
a b c d 
A B C D 
a b c d 

*/ 

# include<stdio.h>

void Pattern ( int iRow , int iCol )
{
    char ch1   = 'A' ; 
    char ch2 = 'a';
    int i = 0 ; 
    int o = 0 ; 



    for ( o = 1 ; o <= iRow ; o++ )                  // rows 
    {
        
        for ( i = iCol  ; i >= 1 ; i--)              // columns 
        {
            if ( o  % 2 == 0 )
            {
                printf(" %c ",ch2) ;
                ch2++ ;
        
            }
            else 
            {
                printf(" %c ",ch1) ;
                ch1++ ;
            }
          
        }
        printf("\n");
        ch1 = 'A';
        ch2 ='a' ;
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