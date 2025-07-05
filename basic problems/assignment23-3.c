/*
Accept character from user if it is capital then display all the characters 
from the input character till Z . if input character is small then print all the 
characters in reverse order till a . in other cases return directly 

*/

// input : Q 
// output : Q R S T U V W X Y Z 

// input : m
//output : m l k j i h g f e d c b a 


# include <stdio.h>

void DisplayCharacter ( char Char )
{
    int iCnt = 0 ;

    if ((((Char > 0 ) && (Char < 65 )) || ((Char > 123 ) && (Char < 127 ))))
    {
        return ;
    }

    char Count = '\0' ;

    if (( Char >= 65 ) && ( Char <= 90))
    {
        for ( iCnt = Char ; iCnt <= 90 ; iCnt++ )
        {
            printf("%c \t ",iCnt) ;
        }
    }
    else if (( Char >= 97 ) && ( Char <= 122 ))
    {
        for ( iCnt = Char ; iCnt >= 97 ; iCnt-- )
        {
            printf("%c \t ",iCnt) ;
        }
    }

}

int main ()
{
    char ch = '\0' ; 

    printf(" enter the character to display : ");
    scanf("%c",&ch);

    DisplayCharacter (ch) ;

    return 0 ;
}
