// accept character from user and check wether it is small case or not ( a - z )

// input : a
// output : true 

// input : A
// output : false 

# include <stdio.h>
# include <stdbool.h>


bool CheckSmallCase ( char Character )
{
    bool cRet = false ; 
     
    if ((Character >= 97 ) && (Character <= 122 ))
    {
        cRet = true ;
    }
     return cRet ;
}


int main ()
{
    char cChar = '\0' ;
    bool cRet = false  ; 

    printf(" enter character to check wether it is small case or not : ") ;
    scanf("%c",&cChar);

    cRet = CheckSmallCase (cChar) ; 

    if (cRet == true )
    {
       printf( " %c : the character is in small case  ",cChar) ;
    }
    else
    {
       printf( " %c : the character is not a small case ",cChar) ; 
    }

    return  0 ;
}