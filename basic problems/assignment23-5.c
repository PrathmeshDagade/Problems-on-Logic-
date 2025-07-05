/*
Accept character from user and display its decimal octal and hexadecial ASCII values 

*/

// input : A
// output : decimal  : 65 
//          hexadecimal : 0X41
//          octal : 0101 


# include <stdio.h>


void Display ( char Char )
{
    if (( Char >= 0 ) && (Char <= 127 ))
    {
        printf(" decimal : %d \t hexadecimal : 0x%X \t  octal : %o ",Char,Char,Char) ;
    }
}

int main ()
{
    char ch = '\0' ; 
    
    printf(" enter the character to display its decimal hexadecimal octal numbers of that character : ");
    scanf("%c",&ch);

    Display (ch) ;

    return 0 ;
}