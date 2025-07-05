// accept character from user and check wether it is digit or not ( 0 - 9 )

// input : 7 
// output : true 

// input : d
// output : false 

# include <stdio.h>
# include <stdbool.h>


bool CheckDigit ( char Character )
{
    bool cRet = false ; 
     
    if ((Character >= 48 ) && (Character <= 57 ))
    {
        cRet = true ;
    }
     return cRet ;
}


int main ()
{
    char cChar = '\0' ;
    bool cRet = false  ; 

    printf(" enter character to check wether it is digit or not : ") ;
    scanf("%c",&cChar);

    cRet = CheckDigit (cChar) ; 

    if (cRet == true )
    {
       printf( " %c : the character is digit ",cChar) ;
    }
    else
    {
       printf( " %c : the character is not a digit ",cChar) ; 
    }

    return  0 ;
}