/*
Accept character from user and check wether it is special symbol or not 
( ! @ # $ % ^ & * )
*/

// input : %
// output : true 

// input : d
//output : false 


# include <stdio.h>
# include <stdbool.h>


bool CheckSpecial ( char Char )
{
    bool bRet = false ;

    if ((((((Char >= 32 ) && (Char <= 47 )) || ((Char >= 58 ) && (Char <= 64 )))) || ((Char >= 91 ) && (Char <= 96 ))) || ((Char >= 123 ) && (Char <= 126 )))
    {
        bRet = true ;
    }
    return bRet ;
}

int main ()
{
    char ch = '\0' ; 
    bool bRet = false ; 

    printf(" enter the character to check wether it is special symbol or not  : ");
    scanf("%c",&ch);

    bRet = CheckSpecial (ch) ;

    if (bRet == true )
    {
        printf(" it is a special symbol : ");
    }
    else 
    {
        printf(" it is not a special symbol : ");
    }

    return 0 ;
}
