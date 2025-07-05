// Accept character from user and check wether it is alphabet or not (A-Z a-z ) 

// input : F 
// output : True 

// input : &
// output : False 

# include <stdio.h>
# include <stdbool.h>

 bool CheckCharacter ( char Char )
{
    bool cRet = false ;

    if ((( Char >= 65 ) && ( Char <= 90 )) || (( Char >= 97 ) && ( Char <= 122 )))
    {
        cRet = true ;
    }

     return cRet ; 
}

int main ()
{
 char cChar = '\0' ; 
 bool cRet = false ;  

 printf(" Enter the Character : ");
 scanf("%c",&cChar); 

 cRet = CheckCharacter (cChar) ;

 if ( cRet == true )
 {
    printf(" %c : It is alphabetic ",cChar) ;
 }
 else 
 {
    printf(" %c : It is not alphabetic ",cChar) ;
 }

    return 0 ;
}