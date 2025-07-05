/*
Accept character from user if character is small display its 
corresponding capital character and if it is capital then display 
its corresponding small in other case display as it is 

*/

// input : a 
// output : A 

// input : A 
//output : a 

// input : a 
// output : A 

// input : #
//output : #


# include <stdio.h>

void DisplayCorresponding ( char Char )
{

    if ((((Char > 0 ) && (Char < 65 )) || ((Char > 123 ) && (Char < 127 ))))
    {
        printf("%c",Char) ;
    }

    char Count = '\0' ;

    if (( Char >= 65 ) && ( Char <= 90))
    {
        Count = Char + 32 ;
        printf(" the Corrrosponding is %c",Count);
        Count = '\0'; 
    }
    else if (( Char >= 97 ) && ( Char <= 122 ))
    {
         Count = Char - 32 ;
        printf(" the Corrrosponding is %c",Count);
        Count = '\0'; 
    }

}

int main ()
{
    char ch = '\0' ; 

    printf(" enter the character to display the corsponding of it ");
    scanf("%c",&ch);

    DisplayCorresponding (ch) ;

    return 0 ;
}
